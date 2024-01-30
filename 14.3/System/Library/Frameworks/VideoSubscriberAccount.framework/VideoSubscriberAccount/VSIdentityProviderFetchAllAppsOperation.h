@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAllAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
