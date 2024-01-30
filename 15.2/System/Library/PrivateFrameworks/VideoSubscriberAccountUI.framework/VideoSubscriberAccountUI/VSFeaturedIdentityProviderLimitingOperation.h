@class NSOperationQueue, NSArray, VSOptional;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders;
@property (retain, nonatomic) VSOptional *result;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;

@end
