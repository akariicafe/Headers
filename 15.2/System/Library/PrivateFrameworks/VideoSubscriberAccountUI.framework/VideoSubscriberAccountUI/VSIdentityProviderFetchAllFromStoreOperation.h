@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
