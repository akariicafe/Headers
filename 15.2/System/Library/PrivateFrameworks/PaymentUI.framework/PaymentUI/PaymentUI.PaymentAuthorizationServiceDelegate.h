@interface PaymentUI.PaymentAuthorizationServiceDelegate : NSObject <PKPaymentAuthorizationServiceProtocol> {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ context;
}

- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)handleHostApplicationDidCancel;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
