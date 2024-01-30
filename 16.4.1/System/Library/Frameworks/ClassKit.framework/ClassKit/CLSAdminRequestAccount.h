@class NSString, NSArray, CLSPerson;

@interface CLSAdminRequestAccount : CLSObject

@property (copy, nonatomic) NSString *personID;
@property (retain, nonatomic) CLSPerson *accountPersonInfo;
@property (retain, nonatomic) NSString *requestedRoleID;
@property (nonatomic) long long requestedRoleType;
@property (copy, nonatomic) NSArray *requestedLocationIDs;
@property (copy, nonatomic) NSString *temporaryPassword;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSArray *conflictingPersonIDs;
@property (nonatomic) long long status;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;
- (id)initWithAdminRequestID:(id)a0 forAccountWithGivenName:(id)a1 middleName:(id)a2 familyName:(id)a3 emailAddress:(id)a4 appleID:(id)a5 personNumber:(id)a6 roleType:(long long)a7 atLocationIDs:(id)a8;
- (id)initWithAdminRequestID:(id)a0 personID:(id)a1;
- (id)initWithAdminRequestID:(id)a0 personID:(id)a1 roleType:(long long)a2 atLocationIDs:(id)a3;
- (void)setRequestedRole:(id)a0;

@end
