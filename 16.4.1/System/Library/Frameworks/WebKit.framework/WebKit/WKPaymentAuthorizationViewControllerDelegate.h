@class NSString;

@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)_getPaymentServicesMerchantURL:(id /* block */)a0;
- (void)paymentAuthorizationViewController:(id)a0 didChangeCouponCode:(id)a1 handler:(id /* block */)a2;
- (id)initWithRequest:(id)a0 presenter:(void *)a1;
- (void)paymentAuthorizationViewController:(id)a0 didRequestMerchantSession:(id /* block */)a1;
- (void)paymentAuthorizationViewController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didSelectShippingContact:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;

@end
