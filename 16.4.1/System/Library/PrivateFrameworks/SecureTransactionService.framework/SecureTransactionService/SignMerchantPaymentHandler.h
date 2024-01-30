@class NFECommercePaymentSession, STSSigningSession;

@interface SignMerchantPaymentHandler : STSHandler {
    NFECommercePaymentSession *_nfECommerceSession;
}

@property (readonly, weak, nonatomic) STSSigningSession *parent;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (id)signInAppPayment:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)startNFSessionWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
