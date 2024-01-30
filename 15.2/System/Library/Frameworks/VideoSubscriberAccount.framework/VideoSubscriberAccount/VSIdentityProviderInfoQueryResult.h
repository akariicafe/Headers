@class VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoQueryResult : NSObject

@property (copy, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSString *designatedAppBundleIdentifier;

- (id)description;
- (void).cxx_destruct;

@end
