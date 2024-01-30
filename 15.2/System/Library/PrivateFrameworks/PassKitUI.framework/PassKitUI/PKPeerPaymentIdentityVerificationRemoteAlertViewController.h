@class NSString, PKPeerPaymentIdentityVerificationController, PKPeerPaymentWebService, PKNavigationController;

@interface PKPeerPaymentIdentityVerificationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupViewControllerDelegate> {
    PKPeerPaymentIdentityVerificationController *_controller;
    PKNavigationController *_navController;
    PKPeerPaymentWebService *_webService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)pk_navigationController;
- (id)_alertViewController;

@end
