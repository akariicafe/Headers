@class VSOptional, NSURLSessionTask, VSStoreURLBag, VSAuditToken;

@interface VSVerificationStateResetOperation : VSAsyncOperation

@property (retain, nonatomic) VSStoreURLBag *bag;
@property (retain, nonatomic) NSURLSessionTask *resetStateTask;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_resetVerificationStateWithURL:(id)a0;

@end
