@class NSOperationQueue, VSOptional, NSString;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (nonatomic) unsigned long long requestType;
@property (retain, nonatomic) NSString *identityProviderID;
@property (nonatomic) BOOL shouldFetchImages;
@property (nonatomic) BOOL shouldPrecomposeIcon;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)initWithProviderIdentifier:(id)a0 andType:(unsigned long long)a1;

@end
