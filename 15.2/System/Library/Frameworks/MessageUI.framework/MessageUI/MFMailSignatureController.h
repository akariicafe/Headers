@interface MFMailSignatureController : NSObject

- (void)addSignatureForSender:(id)a0 bodyField:(id)a1 prepend:(BOOL)a2;
- (void)updateSignatureForSender:(id)a0 bodyField:(id)a1;
- (void)removeSignatureForSender:(id)a0 bodyField:(id)a1;
- (void)finalizeSignatureForBodyField:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isDefaultSignatureForSender:(id)a0;
- (id)_signatureStringForSender:(id)a0;
- (id)_getSignatureStringForSender:(id)a0;

@end
