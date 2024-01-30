@class PKPeerPaymentTermsController;

@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    PKPeerPaymentTermsController *_termsController;
}

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;

@end
