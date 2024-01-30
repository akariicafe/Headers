@class PKPeerPaymentTermsController;

@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPeerPaymentTermsController *_termsController;
}

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_dismiss;
- (unsigned long long)supportedInterfaceOrientations;

@end
