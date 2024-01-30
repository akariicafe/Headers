@class PKPaymentAuthorizationCoordinator, NSString;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentAuthorizationController *_retainSelf;
}

@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (weak, nonatomic) id<PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;

- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeContextWithHandler:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePeerPaymentQuote:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeDisbursementVoucher:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentRequest:(id)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didRequestMerchantSessionUpdate:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingAddress:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;

@end
