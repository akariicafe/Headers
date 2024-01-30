@interface MFMailSignatureController : NSObject

- (BOOL)isDefaultSignatureForSender:(id)a0;
- (void)addSignatureForSender:(id)a0 bodyField:(id)a1 prepend:(BOOL)a2;
- (void)updateSignatureForSender:(id)a0 bodyField:(id)a1;
- (void)finalizeSignatureForBodyField:(id)a0 completionHandler:(id /* block */)a1;
- (id)_signatureStringForSender:(id)a0;
- (void)removeSignatureForSender:(id)a0 bodyField:(id)a1;

@end
