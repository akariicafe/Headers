@class NSDate;

@interface AKAbsintheSigner : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;

- (void)signatureForURLRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_generateSignatureForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createSigningContextWithCompletionHandler:(id /* block */)a0;
- (BOOL)_didSigningContextExpire;
- (void)_destroySigningContext;
- (id)_sessionInfoFromCertificateData:(id)a0;
- (void)_establishSessionWithInfo:(id)a0 sessionURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)signatureForURLRequest:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
