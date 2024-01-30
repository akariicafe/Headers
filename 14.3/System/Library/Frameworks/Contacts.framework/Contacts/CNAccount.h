@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *externalIdentifierString;

+ (id)makeIdentifierString;
+ (id)localAccount;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (id)makeIdentifier;
+ (id)identifierProvider;
+ (id)os_log;
+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)requestAccountSyncWithDefaultOptions;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;
- (id)initWithExternalIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1 iOSLegacyIdentifier:(int)a2;
- (void)encodeWithCoder:(id)a0;

@end
