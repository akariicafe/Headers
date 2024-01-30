@class NSString, NSObject;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (void)didEncounterAuthorizationEvent:(unsigned long long)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizeDisbursement:(id)a0;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)a0;
- (void)authorizationWillStart;
- (void)beginDelayingCallbacks;
- (void)endDelayingCallbacks;
- (id)vendorContext;

@end
