//Hospital Management System .....
#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
//Hybrid Inheritance
class hospital                                     // Base Class
{
	private:
	string name;
	string fn;
	string gender;
	int age;
	string phone;
	string address;
	fstream outfile;
	public:
		void setdata()
		{                                              //Take Data from User
			cin.ignore();
			cout<<"Enter Name"<<endl;
			getline(cin,name);
			cout<<"Enter Father's Name"<<endl;
			getline(cin,fn);
			cout<<"Enter Gender"<<endl;
			getline(cin,gender);
			cout<<"Enter Age"<<endl;
			cin>>age;
			cout<<"Phone no."<<endl;
			cin>>phone;
			cin.ignore();
			cout<<"Enter Address"<<endl;
			getline(cin,address);
	outfile.open("Text.txt",ios::out | ios::app);
	outfile<<name<<"\n";
	outfile<<fn<<"\n";
	outfile<<gender<<"\n";
	outfile<<age<<"\n";
	outfile<<phone<<"\n";
	outfile<<address<<"\n";
	outfile.close();
		}
		void display()
		{                                    //Display Data of User
			cout<<"Name:  "<<name<<endl;
			cout<<"Father's Name:  "<<fn<<endl;
			cout<<"Gender:  "<<gender<<endl;
			cout<<"Age:  "<<age<<endl;
			cout<<"Phone:  "<<phone<<endl;
			cout<<"Address:  "<<address<<endl;
			cout<<"Viewing Data Stored in File"<<endl;
			string line;
				outfile.open("Text.txt",ios::in);
				while(! outfile.eof())
	{
		getline(outfile,line);
		cout<<line<<endl;
	}
	outfile.close();
		}
};
class admit                                     // Base Class
{
	string qualification;
	string experience;
	string data;
	public:
		void setdata()
		{
			cin.ignore();
			cout<<"Enter Qualification"<<endl;
			getline(cin,qualification);
			cout<<"Enter Previous Academic Data:"<<endl;
			getline(cin,data);
			cout<<"Enter Working Experience"<<endl;
			getline(cin,experience);
		}
		void display()
		{
			cout<<"Qualification:"<<qualification<<endl;
			cout<<"Experience:"<<experience<<endl;
			cout<<"Data:"<<data<<endl;
		}
};
 //Derived Classes
class employe:private hospital,private admit                   //Inherit
{
	public:
		void set()
		{
			hospital::setdata();
			admit::setdata();
		}
		void disp()
		{
			hospital::display();
			admit::display();
		}
		virtual void setdata()=0;
		virtual void display()=0;
};
class doctor:public employe
{
	string specialization;
	public:
		void setdata()
		{
			cin.ignore();
			set();
			cout<<"Enter Specialization"<<endl;
			getline(cin,specialization);
		}
		void display()
		{
			disp();
			cout<<"Specialization: "<<specialization<<endl;
		}
};
class nurse:public employe
{
	string tell;
	public:
		void setdata()
		{
			cin.ignore();
			set();
			cout<<"Enter Work in 'Outdoor' or 'Emergency'..?"<<endl;
			getline(cin,tell);
		}
		void display()
		{
			disp();
			cout<<"Work:  "<<tell<<endl;
		}
};
class worker:private employe
{
	string toll;
	public:
		void setdata()
		{
			cin.ignore();
			set();
			cout<<"Enter work as 'Staff' or 'Helper'"<<endl;
			getline(cin,toll);
		}
		void display()
		{
			disp();
			cout<<"Work:  "<<toll<<endl;
		}
};
class neww : public hospital
{
	private:
		string department,dis;
	public:
		void setdata()
		{
			cin.ignore();
			hospital::setdata();
			cout<<"Enter Department:"<<endl;
			getline(cin,department);
			cout<<"Enter Disease:"<<endl;
			getline(cin,dis);
		}
		void display()
		{
			hospital::display();
			cout<<"Department: "<<department<<endl;
			cout<<"Disease: "<<dis<<endl;
		}
};
		void show()                          //Make a function of Departments
		{
	cout<<"Departments Available in our Hospital:::"<<endl;
	cout<<"Departments List:"<<endl;
	cout<<"1: Neurology"<<endl;
	cout<<"2: ENT"<<endl;
	cout<<"3: Dental"<<endl;
	cout<<"4: Respiratory"<<endl;
	cout<<"5: Cardiovascular"<<endl;
	cout<<"6: Gestrointestinal"<<endl;
	cout<<"7: Urology"<<endl;
	cout<<"8: OMFS"<<endl;
	cout<<"9: Orthopedic"<<endl;
	cout<<"10: Gynae"<<endl;
	cout<<"11: Speech Therapy"<<endl;
	cout<<"12: Psyco Therapy"<<endl;
	cout<<"Select your required department and take ur Slip:"<<endl;
}
void saver()                                                          //Make a function to save Data
{
	int z;
	cout<<"Press 1 to Save Data and 2 for Exit:";
	cin>>z;
	if(z==1)
	{
		cout<<"Data Save Successfuly"<<endl;
	}
	if(z==2)
	{
		cout<<"Exit";
	}
}
void payment()                                                      //Payment function
{
	int a;
    	cout<<"How you want to pay Bill..?"<<endl;
	    cout<<"1: Debit Card"<<endl;
	    cout<<"2: Cash Payment:"<<endl;
	    cout<<"Choose your Option"<<endl;
	    cin>>a;
	if(a==1)
	{
		int s;
		cout<<"Enter Debit Card No."<<endl;
		cin>>s;
		cout<<"Amount Detucted from your Account"<<endl;
	}
	if(a==2)
	{
		cout<<"Pay Cash at counter:"<<endl;
	
	    cout<<"Thank You:"<<endl;
	}
}
void app()
{
	int d;
	    cout<<"Select Doctor"<<endl;
		cin>>d;
		cout<<"Apointment Complete"<<endl;
		cout<<"Go to Reception:"<<endl;
		cout<<"Come at Given Time Given by Reception:"<<endl;
		cout<<"Thank You!"<<endl;
}
void common()
{
	cout<<"Welcome tO Common Disease:"<<endl;
	int o;
	cout<<"Common Diseases Now_a_Days:"<<endl;
	cout<<"Hepatitis"<<endl;
	cout<<"Dengue"<<endl;
	cout<<"Malaria"<<endl;
	cout<<"AIDS"<<endl;
	cout<<"Diabetes"<<endl;
	cout<<"Asthma"<<endl;
	cout<<"TB"<<endl;
	cout<<"For Details:"<<endl;
	cout<<"Go to Counter:"<<endl;
	cout<<"Thank You"<<endl;
}
void lab()
{
	int m;
	cout<<"Welcome tO Laboratory System:"<<endl;
	d:
	cout<<"Test Available:"<<endl;
	cout<<"1:  CBC"<<endl;
	cout<<"2:  LFTs"<<endl;
	cout<<"3:  RFTs"<<endl;
	cout<<"4:  Blood Sugar Test"<<endl;
	cout<<"5:  PCR"<<endl;
	cout<<"Select Test:"<<endl;
	cin>>m;
	if(m==1)
	{
		cout<<"Price 500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(m==2)
	{
		cout<<"Price 2500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(m==3)
	{
		cout<<"Price 4000"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(m==4)
	{
		cout<<"Price 1500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(m==5)
	{
		cout<<"Price 1600"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	else
	{
		cout<<"Enter Correct Option:"<<endl;
		goto d;
	}
}
void rad()
{
	int n;
	cout<<"Welcome tO Radiography System:"<<endl;
	d:
	cout<<"Available Radiographs:"<<endl;
	cout<<"1: Chest X-rays"<<endl;
	cout<<"2: CT-Scan"<<endl;
	cout<<"3: CBCT"<<endl;
	cout<<"4: MRI"<<endl;
	cout<<"5: Endoscopy"<<endl;
	cout<<"Select Radigraph:"<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<"Price 500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(n==2)
	{
		cout<<"Price 2500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(n==3)
	{
		cout<<"Price 4000"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(n==4)
	{
		cout<<"Price 1500"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	if(n==5)
	{
		cout<<"Price 1600"<<endl;
		cout<<"Go to Counter and Pay Dues:"<<endl;
	}
	else
	{
		cout<<"Enter Correct Option:"<<endl;
		goto d;
	}
}
void blood()
{
	string a,b,d;
	cout<<"Blood Availables:"<<endl;
		cout<<"A+"<<endl;
		cout<<"O+"<<endl;
		cout<<"B-"<<endl;
		cout<<"A-"<<endl;
		cout<<"Enter Blood Group"<<endl;
		cin>>a;
		cout<<"Any Disease..?"<<endl;
		cin>>b;
		cout<<"Enter Quantitiy"<<endl;
		cin>>d;
		cout<<"Data Save Successfuly"<<endl;
		cout<<"Take ur Slip and go to Room Given by reception:"<<endl;
}
void logo()
   {
   	cout<<"\n";
cout<<"                         +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n";
cout<<"                         *                                                           *";
cout<<"\n";
cout<<"                         *                    Hospital Management System             *";
cout<<"\n";
cout<<"                         *                                                           *";
cout<<"\n";
cout<<"                         *                                              BSCS-3A      *";
cout<<"\n";
cout<<"                         +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<endl;
   }
int main()                                                             //Main Function
{
	system("color 81");
	hospital h1;
	employe *e1;
	doctor d1;
	nurse n1;
	worker w1;
   //Hospital Logo
   logo();
system("pause");
system("cls");
int i;
int j;
int k;
int m;
int n;
//giving option to user:
b:
back:
	logo();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t|______________________________________________________________|\n";
cout<<"\t\t\t\t\t\t|                                                              |\n";                   
cout<<"\t\t\t\t\t\t|             1  >> Slip                         	          |\n";
cout<<"\t\t\t\t\t\t|             2  >> Admit                                      |\n";
cout<<"\t\t\t\t\t\t|             3  >> Departments                                |\n";
cout<<"\t\t\t\t\t\t|             4  >> New Doctor/Nurse/Worker                    |\n";
cout<<"\t\t\t\t\t\t|             5  >> Laboratory                                 |\n";
cout<<"\t\t\t\t\t\t|             6  >> Blood Bank                                 |\n";
cout<<"\t\t\t\t\t\t|             7  >> Ambulance                                  |\n";
cout<<"\t\t\t\t\t\t|             8  >> Pharmacy                                   |\n";
cout<<"\t\t\t\t\t\t|             9  >> About                                      |\n";
cout<<"\t\t\t\t\t\t|______________________________________________________________|\n";
a:
cout<<"\t\t\t\t\t\tEnter your choice: ";
cin>>i;
system("cls");
if(i>11||i<1)
{
    cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
	cout<<"\t\t\t\t\t\tTry again...........\n\n";
    goto a;
}
 //if inputed choice is other than given choice
system("cls");
if(i==1)
{
	logo();
	cout<<endl;
	cout<<"Welcome tO Slip System:"<<endl;
	int s;
	string f;
	h1.setdata();
	cout<<"Enter Disease:"<<endl;
	cin>>f;
	h1.display();
	cout<<"Press 1 to save,2 to cancel:"<<endl;
	cin>>s;
	if(s==1)
	{
		cout<<"Save Successfuly"<<endl;
		cout<<"Take your Slip and Pay Bill..."<<endl;
		payment();                                            //Calling Payment Function
		cout<<"Go for Checkup in Room 27:"<<endl;
	cout<<"Thank You:";
	}
    else
	{
		cout<<"Slip Cancelled";
	}
	cout<<"Thank You"<<endl;
	int o;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}
	system("cls");
}
if(i==2)
{
	logo();
	cout<<endl;
	cout<<"Welcome to Admit System:"<<endl;
	neww e1;
	int o;
	e1.setdata();
	e1.display();
	payment();                                             //Calling Payment Function
	cout<<"Thank You"<<endl;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
system("cls");
if(i==3)
{
	logo();
	cout<<"Welcome tO Departments System:"<<endl;
	show();
	cout<<"Thank You"<<endl;
	int o;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
system("cls");
if(i==4)
{
	int s;
	logo();
	cout<<"1: New Doctor"<<endl;
	cout<<"2: New Nurse"<<endl;
	cout<<"3: New Workerr"<<endl;
	cin>>s;
	if(s==1)
	{
		d1.setdata();
		d1.display();
    	cout<<"Data Save Successfuly"<<endl;
	    cout<<"Thank You"<<endl;
	}
	if(s==2)
	{
		n1.setdata();
		n1.display();
		cout<<"Data Save Successfuly"<<endl;
	    cout<<"Thank You"<<endl;
	}
	if(s==3)
	{
		w1.setdata();
		w1.display();
		cout<<"Data Save Successfuly"<<endl;
	    cout<<"Thank You"<<endl;
	}
	int o;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
system("cls");
if(i==5)
{
	logo();
	cout<<endl;
	int b;                                       //Laboratory,Radiography,Blood Bank
	cout<<"1: Laboratory"<<endl;
	cout<<"2: Radiography"<<endl;
	cout<<"Enter Your Choice:"<<endl;
	cin>>b;
	system("Cls");
	if(b==1)
	{
	lab();
	cout<<endl;
	payment();
	cout<<"Thank You"<<endl;
}
if(b==2)
{
	rad();
	cout<<endl;
	payment();
	cout<<"Thank You:"<<endl;
}
int o;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}

}
system("cls");
if(i==6)
{
	cout<<"Welcome tO Blood Bank System:"<<endl;
	int g;
	cout<<"1: Donor"<<endl;
	cout<<"2: Recipient"<<endl;
	cout<<"Select Your Option"<<endl;
	cin>>g;
	if(g==1)
	{
		logo();
		cout<<endl;
		h1.setdata();
		cout<<"Give your Blood in Laboratory"<<endl;
		cout<<"Thanks for Helping Others:"<<endl;
		cout<<"Thank You"<<endl;
	}
	if(g==2)
	{
		logo();
		string a,b,d;
		cout<<endl;
		h1.setdata();
		blood();
		cout<<"Thank You"<<endl;
	}
}
if(i==7)
{    
    logo();
    cout<<endl;
	cout<<"Welcome tO Ambulance System:"<<endl;                      //Ambulance System
	int o;
	int b;
	cout<<"1: From Home tO Hospital..?"<<endl;
	cout<<"2: From Hospital to Home..?"<<endl;
	cin>>b;
	if(b==1)
	{
		logo();
		string c;
		cout<<endl;
		cout<<"Address..?";
		cin>>c;
		cout<<"Ambulance Departed:"<<endl;
		cout<<"Ambulance will be there as soon as possible.."<<endl;
		cout<<"Please Keep Calm"<<endl;
		cout<<"Thank You"<<endl;
	}
	if(b==2)
	{
		logo();
		cout<<endl;
		string d;
		cout<<"Address..?";
		cin>>d;
		cout<<"Ambulance Alloted:"<<endl;
		cout<<"Please Keep Calm"<<endl;
		cout<<"Thank You"<<endl;
	}
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}

}
system("cls");
if(i==8)
{
	logo();
	cout<<"Welcome tO Pharmacy System:"<<endl;                    //Pharmacy System
	int o;
	int p;
	cout<<"Welcome to Pharmacy:"<<endl;
	cout<<"1: Search Medicine..?"<<endl;
	cout<<"2: Medicine Home Dilevery..?"<<endl;
	cin>>p;
	if(p==1)
	{
		cout<<endl;
		string m;
		int d;
		k:
		cout<<"Enter Medicine Name:";
		cin>>m;
		if(m=="panadol"||m=="brufen"||m=="araenic"||m=="tiktok"||m=="aresenic"||m=="tolykol"||m=="trinder")
		{
			cout<<"Medicine Available"<<endl;
			cout<<"Press 1 to buy"<<endl;
			cout<<"Press 2 to Exit"<<endl;
			cin>>d;
			if(d==1)
			{
				payment();
			}
	    }
		else
		{
			cout<<"No Medicine Found"<<endl;
			cout<<"Enter another Medicine:"<<endl;
			goto k;
		}
	}
	if(p==2)
	{
		cout<<endl;
		l:
		string n;
		cout<<"Enter Medicine Name:";
		cin>>n;
		if(n=="panadol"||n=="brufen"||n=="araenic"||n=="tiktok"||n=="aresenic"||n=="tolykol"||n=="trinder")
		{
			string a;
			cout<<"Medicine Available"<<endl;
			cout<<"Enter Dilevery Address:"<<endl;
			cin>>a;
			cout<<"Medicinde dilevery departed.."<<endl;
			cout<<"Medicine will be there as soon as possible"<<endl;
			cout<<"Please Give Remarks after Dilevery:"<<endl;
			cout<<"Thank You"<<endl;
		}
		else
		{
			cout<<"No Medicine Found"<<endl;
			cout<<"Enter another Medicine:"<<endl;
			goto l;
		}
	}
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}

}
system("cls");
if(i==9)
{
	logo();
	cout<<"Welcome tO About:"<<endl;                  //About Hospital
	int o;
	cout<<"Hospital is situated over an area of (256 Kanals) on Ferozepur road,Lahore about 17 Kilometers"<<endl;
	cout<<"Which was initially proposed as beggar house and its foundation stone was laid down by her excellancy BEGGUM NAHEED W/O of Governer General of Pakistan on 27/02/1958..."<<endl;
	cout<<"Thank You"<<endl;
	cout<<"Goto Main Menu..Press 1"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		goto back;
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
system("cls");
return 0;
}
