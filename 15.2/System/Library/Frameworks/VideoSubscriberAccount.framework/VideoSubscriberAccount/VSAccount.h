@class NSString, VSOptional, VSAccountStore;

@interface VSAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VSOptional *keychainItem;
@property (weak, nonatomic) VSAccountStore *accountStore;
@property (copy, nonatomic) NSString *accountTypeDescription;
@property (copy, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName;
@property (readonly, nonatomic) NSString *identityProviderDisplayName;
@property (retain, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *preferredAppID;
@property (retain, nonatomic) VSOptional *authenticationToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
