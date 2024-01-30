@class NSOperationQueue, VSOptional, NSString;

@interface VSIdentityProviderFetchChannelAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *identityProviderID;
@property (nonatomic) BOOL shouldFetchImages;
@property (nonatomic) BOOL shouldPrecomposeIcon;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)initWithProviderIdentifier:(id)a0;

@end
