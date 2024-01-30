@class VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoQueryResult : NSObject

@property (copy, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSString *designatedAppBundleIdentifier;

- (void).cxx_destruct;
- (id)description;

@end
