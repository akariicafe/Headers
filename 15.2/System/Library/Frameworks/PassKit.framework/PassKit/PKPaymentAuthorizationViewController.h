@class PKPaymentAuthorizationCoordinator, NSString;
@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (nonatomic) BOOL viewHasAppeared;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (BOOL)isPlatformSupported;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;
+ (void)paymentServicesMerchantURL:(id /* block */)a0;

- (long long)modalPresentationStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithPaymentRequest:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithCoder:(id)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didRequestMerchantSessionUpdate:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingAddress:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didChangeCouponCode:(id)a1 handler:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_presentInAppPaymentInterface;
- (void)_presentInAppPaymentInterfaceWithWindow:(id)a0;

@end
