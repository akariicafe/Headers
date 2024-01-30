@class NSString;

@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didChangeCouponCode:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectShippingContact:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationController:(id)a0 didRequestMerchantSession:(id /* block */)a1;
- (id)initWithRequest:(id)a0 presenter:(void *)a1;
- (void)_getPaymentServicesMerchantURL:(id /* block */)a0;

@end
