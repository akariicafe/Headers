@class NSArray, VSOptional, VSStoreURLBag;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

@property (retain, nonatomic) VSStoreURLBag *bag;
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders;
@property (retain, nonatomic) VSOptional *result;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
