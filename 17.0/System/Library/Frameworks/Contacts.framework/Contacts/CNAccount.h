@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *externalIdentifierString;

+ (id)localAccount;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)os_log;
+ (id)makeIdentifier;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;
+ (BOOL)requestAccountSyncWithDefaultOptions;
+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExternalIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1 iOSLegacyIdentifier:(int)a2;

@end
