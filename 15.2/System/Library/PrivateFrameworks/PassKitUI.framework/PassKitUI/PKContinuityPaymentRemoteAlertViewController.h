@class UINavigationController, NSString, PKContinuityPaymentService, PKRemotePaymentRequest, PKContinuityPaymentViewController;

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol> {
    PKContinuityPaymentViewController *_continuityViewController;
    UINavigationController *_navigationController;
    PKRemotePaymentRequest *_remoteRequest;
    PKContinuityPaymentService *_continuityService;
    BOOL _hasAuthorizedPayment;
    BOOL _hasSentCancelPaymentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (BOOL)prefersStatusBarHidden;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)_invalidate;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)didReceivePaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceivePaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)authorizationWillStart;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizeDisbursement:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)_cancelPayment;
- (void)_presentEnrollAccessibilityIntentAlert;

@end
