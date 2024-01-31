@class NSString, NSPersonNameComponents;

@interface CLSPerson : CLSObject <CLSContactsSearchable>

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *iCloudUserID;
@property (copy, nonatomic) NSString *orgID;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *personNumber;
@property (nonatomic) long long passcodeType;
@property (nonatomic, getter=isProgressTrackingAllowed) BOOL progressTrackingAllowed;
@property (nonatomic, getter=isFederatedAccount) BOOL federatedAccount;
@property (nonatomic) long long axmAccountStatus;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *grade;
@property (nonatomic) long long sourceType;
@property (nonatomic, getter=isEditable) BOOL isEditable;
@property (nonatomic, getter=isSearchable) BOOL isSearchable;
@property (copy, nonatomic) NSString *searchText;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)roleFromString:(id)a0;
+ (id)_propertyNames;
+ (id)stringForRole:(unsigned long long)a0;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;

@end
