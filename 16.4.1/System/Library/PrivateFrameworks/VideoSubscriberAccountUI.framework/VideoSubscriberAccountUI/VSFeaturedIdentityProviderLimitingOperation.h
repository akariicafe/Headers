@class NSOperationQueue, NSArray, VSOptional;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders;
@property (retain, nonatomic) VSOptional *result;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
