@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)executionDidBegin;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
