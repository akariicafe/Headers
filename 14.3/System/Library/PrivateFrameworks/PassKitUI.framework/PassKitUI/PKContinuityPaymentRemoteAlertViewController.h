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

- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldAutorotate;
- (void)didReceivePaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)_cancelPayment;
- (void)didReceivePaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)_invalidate;
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
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
