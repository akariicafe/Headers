@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *externalIdentifierString;

+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)a0;
+ (BOOL)requestAccountSyncWithDefaultOptions;
+ (id)predicateForAccountForContainerWithIdentifier:(id)a0;
+ (id)makeIdentifierString;
+ (id)makeIdentifier;
+ (id)os_log;
+ (id)identifierProvider;
+ (id)predicateForAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForAccountsWithIdentifiers:(id)a0;
+ (id)localAccount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1;
- (id)initWithExternalIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 externalIdentifier:(id)a1 iOSLegacyIdentifier:(int)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
