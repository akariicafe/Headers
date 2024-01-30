@class NSString;

@interface CoreIDV.IdentityElementRawValueKeys : NSObject

@property (class, nonatomic, readonly) NSString *givenName;
@property (class, nonatomic, readonly) NSString *familyName;
@property (class, nonatomic, readonly) NSString *portrait;
@property (class, nonatomic, readonly) NSString *address;
@property (class, nonatomic, readonly) NSString *issuingAuthority;
@property (class, nonatomic, readonly) NSString *documentExpirationDate;
@property (class, nonatomic, readonly) NSString *documentNumber;
@property (class, nonatomic, readonly) NSString *documentIssueDate;
@property (class, nonatomic, readonly) NSString *drivingPrivileges;
@property (class, nonatomic, readonly) NSString *age;
@property (class, nonatomic, readonly) NSString *dateOfBirth;

+ (id)ageIsOver:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
