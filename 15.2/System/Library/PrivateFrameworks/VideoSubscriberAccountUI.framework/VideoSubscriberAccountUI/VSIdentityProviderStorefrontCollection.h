@class NSString, NSMutableArray;

@interface VSIdentityProviderStorefrontCollection : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFeaturedIdentityProviders;
@property (retain, nonatomic) NSMutableArray *mutableAllIdentityProviders;
@property (retain, nonatomic) NSString *storefrontTwoCharCode;
@property (retain, nonatomic) NSString *localizedDisplayName;

- (void).cxx_destruct;
- (id)init;
- (id)allIdentityProviders;
- (id)featuredIdentityProviders;
- (void)featureProvidersInCurrentStorefront;

@end
