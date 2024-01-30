@class NSDate;

@interface AKAbsintheSigner : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_createSigningContextWithCompletionHandler:(id /* block */)a0;
- (void)_destroySigningContext;
- (BOOL)_didSigningContextExpire;
- (void)_establishSessionWithInfo:(id)a0 sessionURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_generateSignatureForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_sessionInfoFromCertificateData:(id)a0;
- (id)signatureForURLRequest:(id)a0;
- (void)signatureForURLRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
