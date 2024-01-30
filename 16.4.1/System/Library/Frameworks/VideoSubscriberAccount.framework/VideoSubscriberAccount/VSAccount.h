@class VSOptional, VSKeychainGenericPassword, NSString, VSAccountStore, NSNumber;

@interface VSAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VSAccountStore *accountStore;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) VSKeychainGenericPassword *keychainItem;
@property (retain, nonatomic) VSKeychainGenericPassword *legacyKeychainItem;
@property (retain, nonatomic) NSNumber *legacyItemHash;
@property (copy, nonatomic) NSString *accountTypeDescription;
@property (copy, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName;
@property (readonly, nonatomic) NSString *identityProviderDisplayName;
@property (retain, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *preferredAppID;
@property (retain, nonatomic) VSOptional *authenticationToken;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)contentsHash;
- (id)effectiveModificationDate;

@end
