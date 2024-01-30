@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
