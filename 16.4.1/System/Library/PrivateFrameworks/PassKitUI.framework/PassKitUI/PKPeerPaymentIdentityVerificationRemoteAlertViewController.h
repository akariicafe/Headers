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

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (long long)preferredStatusBarStyle;
- (void)_dismiss;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)_alertViewController;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;
- (id)pk_navigationController;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
