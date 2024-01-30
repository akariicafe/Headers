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
- (BOOL)_canShowWhileLocked;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_dismiss;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeDisbursement:(id)a0;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationWillStart;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)didReceivePaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceivePaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)_cancelPayment;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)a0;

@end
