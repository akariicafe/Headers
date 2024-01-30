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

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
