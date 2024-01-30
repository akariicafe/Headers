@class NSString, NSDictionary;

@interface CKAccountOverrideInfo : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *recoveryKey;
@property (readonly, copy, nonatomic) NSString *secondEmail;
@property (readonly, copy, nonatomic) NSDictionary *accountPropertyOverrides;
@property (readonly, copy, nonatomic) NSDictionary *overridesByDataclass;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveAccount;
+ (id)anonymousAccount;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithAccountPropertyOverrides:(id)a0 overridesByDataclass:(id)a1;
- (id)_initWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2 secondEmail:(id)a3 accountID:(id)a4 altDSID:(id)a5 accountPropertyOverrides:(id)a6 overridesByDataclass:(id)a7;
- (BOOL)isEqual:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithEmail:(id)a0 password:(id)a1;
- (id)_initWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2;
- (id)initWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2;
- (void).cxx_destruct;
- (id)initWithEmail:(id)a0 password:(id)a1 recoveryKey:(id)a2 secondEmail:(id)a3 accountPropertyOverrides:(id)a4 overridesByDataclass:(id)a5;

@end
