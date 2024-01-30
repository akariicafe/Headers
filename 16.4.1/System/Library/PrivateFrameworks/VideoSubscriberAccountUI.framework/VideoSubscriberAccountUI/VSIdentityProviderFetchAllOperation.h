@class VSOptional, NSArray, NSOperationQueue, VSDevice, VSAuditToken;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *subqueue;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (copy, nonatomic) NSArray *applicationAccountProviders;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
