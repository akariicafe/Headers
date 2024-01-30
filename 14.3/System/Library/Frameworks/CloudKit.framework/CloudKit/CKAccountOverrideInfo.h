@class NSString, NSDictionary;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *secondEmail;
@property (nonatomic) BOOL isUnitTestingAccount;
@property (nonatomic) BOOL accountWantsPushRegistration;
@property (nonatomic) BOOL accountWantsFlowControl;
@property (copy, nonatomic) NSDictionary *accountPropertyOverrides;
@property (copy, nonatomic) NSDictionary *overridesByDataclass;

- (id)CKPropertiesDescription;
- (id)initWithEmail:(id)a0 password:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAccountID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initAnonymousAccount;
- (void)encodeWithCoder:(id)a0;

@end
