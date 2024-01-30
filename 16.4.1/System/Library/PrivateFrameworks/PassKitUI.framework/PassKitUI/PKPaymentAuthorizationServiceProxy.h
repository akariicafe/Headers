@class NSString, NSXPCConnection, PKEntitlementWhitelist, PKPaymentRequest;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationServiceProxy : NSObject <PKPaymentAuthorizationServiceProtocol> {
    BOOL _dismissed;
    NSXPCConnection *_connection;
    PKPaymentRequest *_paymentRequest;
    PKEntitlementWhitelist *_entitlementWhitelist;
}

@property (readonly, nonatomic) PKEntitlementWhitelist *entitlementWhitelist;
@property (weak, nonatomic) id<PKPaymentAuthorizationServiceProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (id)_sanitizeMerchantSessionUpdate:(id)a0;
- (id)initWithConnection:(id)a0 paymentRequest:(id)a1;

@end
