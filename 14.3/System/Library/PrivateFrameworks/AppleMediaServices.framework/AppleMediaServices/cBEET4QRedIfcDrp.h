@class NSString;

@interface cBEET4QRedIfcDrp : NSObject

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;

- (id)initWithSource:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 source:(unsigned long long)a2;
- (id)initWithEmailAddress:(id)a0 source:(unsigned long long)a1;
- (id)initWithPhoneNumber:(id)a0 source:(unsigned long long)a1;
- (id)initWithFullName:(id)a0 source:(unsigned long long)a1;

@end
