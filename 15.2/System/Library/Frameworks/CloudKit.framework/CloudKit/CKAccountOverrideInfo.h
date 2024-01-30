@class NSString, NSDictionary;

@interface CKAccountOverrideInfo : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *secondEmail;
@property (copy, nonatomic) NSDictionary *accountPropertyOverrides;
@property (copy, nonatomic) NSDictionary *overridesByDataclass;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveAccount;
+ (id)anonymousAccount;

- (id)initWithAccountID:(id)a0;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEmail:(id)a0 password:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithEmail:(id)a0 password:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
