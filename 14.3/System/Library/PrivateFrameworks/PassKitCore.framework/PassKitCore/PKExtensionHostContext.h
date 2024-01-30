@class NSString, NSObject;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)vendorContext;
- (void)authorizationWillStart;
- (void)endDelayingCallbacks;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizeDisbursement:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidPresent;
- (void)didEncounterAuthorizationEvent:(unsigned long long)a0;
- (void)authorizationDidAuthorizeContext;
- (void)beginDelayingCallbacks;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)a0;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
