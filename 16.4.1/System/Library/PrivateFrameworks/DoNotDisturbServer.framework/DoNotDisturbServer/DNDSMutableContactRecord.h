@class NSString, NSSet;

@interface DNDSMutableContactRecord : DNDSContactRecord

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSSet *phoneNumbers;
@property (copy, nonatomic) NSSet *emailAddresses;

- (void)setFirstName:(id)a0;
- (void)setContactIdentifier:(id)a0;
- (void)setMiddleName:(id)a0;
- (void)setPhoneNumbers:(id)a0;
- (void)setLastName:(id)a0;
- (void)setNickName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEmailAddresses:(id)a0;
- (void)setOrganizationName:(id)a0;

@end
