@class PKPaymentRequestMerchantSessionUpdate, NSString, PKPaymentMethod, PKPaymentRequestPaymentMethodUpdate, PKPaymentRequestShippingMethodUpdate, PKPaymentRequestCouponCodeUpdate, PKPaymentAuthorizationController, PKShippingMethod, PKPaymentRequestShippingContactUpdate, PKContact;

@interface _PassKit_SwiftUI.PaymentAuthorizationCoordinator : NSObject <PKPaymentAuthorizationControllerDelegate> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ onPaymentAuthorizationChange;
    void /* unknown type, empty encoding */ onMerchantSessionRequested;
    void /* unknown type, empty encoding */ onPaymentAuthorizationCompletion;
    void /* unknown type, empty encoding */ onPaymentMethodChange;
    void /* unknown type, empty encoding */ onShippingContactChange;
    void /* unknown type, empty encoding */ onShippingChange;
    void /* unknown type, empty encoding */ onCouponCodeChange;
    void /* unknown type, empty encoding */ activeWindow;
    void /* unknown type, empty encoding */ underlyingCoordinator;
}

- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)a0 didRequestMerchantSessionUpdate:(void (^)(PKPaymentRequestMerchantSessionUpdate *))a1;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)a0 didSelectShippingMethod:(PKShippingMethod *)a1 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))a2;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)a0 didChangeCouponCode:(NSString *)a1 handler:(void (^)(PKPaymentRequestCouponCodeUpdate *))a2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)a0 didSelectPaymentMethod:(PKPaymentMethod *)a1 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))a2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)a0 didSelectShippingContact:(PKContact *)a1 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))a2;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)paymentAuthorizationControllerWillAuthorizePayment:(id)a0;
- (id)presentationWindowForPaymentAuthorizationController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
