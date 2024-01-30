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

- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (id)initWithPaymentSetupRequest:(id)a0;
- (void)_cancelTapped;
- (void).cxx_destruct;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (id)initWithCoder:(id)a0;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)paymentSetupDidFinish;
- (void)_hideLoadingContent;

@end
