@class PKRemotePaymentSetupViewController, _UIAsyncInvocation, PKPaymentSetupRequest, UIActivityIndicatorView, UILabel, UIButton;

@interface PKPaymentSetupViewController : UIViewController {
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
}

+ (void)paymentSetupFeaturesForConfiguration:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithCoder:(id)a0;
- (long long)modalTransitionStyle;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPaymentSetupRequest:(id)a0;
- (void)_cancelTapped;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)paymentSetupDidFinish;
- (void)_hideLoadingContent;

@end
