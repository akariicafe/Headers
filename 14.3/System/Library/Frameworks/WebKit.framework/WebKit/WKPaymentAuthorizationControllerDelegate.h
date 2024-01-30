@class NSString;

@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectShippingContact:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationController:(id)a0 didRequestMerchantSession:(id /* block */)a1;
- (void)_getPaymentServicesMerchantURL:(id /* block */)a0;
- (id)initWithRequest:(id)a0 presenter:(struct PaymentAuthorizationPresenter { void /* function */ **x0; struct WeakPtrFactory<WebKit::PaymentAuthorizationPresenter, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; struct Client *x2; } *)a1;

@end
