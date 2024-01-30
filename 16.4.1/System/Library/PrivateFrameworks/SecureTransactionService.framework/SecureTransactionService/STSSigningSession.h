@class STSCredential;

@interface STSSigningSession : STSSessionBase {
    STSCredential *_activeCredential;
}

- (void).cxx_destruct;
- (id)setActiveCredential:(id)a0;
- (id)canStartSession;
- (id)_createHandlerForMerchantPaymentSign;
- (id)_createHandlerForPeerPaymentSign;
- (id)createHandlerForCredential:(id)a0;
- (id)signInAppPayment:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)signPeerPayment:(id)a0 authorization:(id)a1 error:(id *)a2;

@end
