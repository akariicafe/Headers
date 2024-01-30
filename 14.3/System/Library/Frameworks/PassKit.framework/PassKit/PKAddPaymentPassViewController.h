@class PKRemoteAddPaymentPassViewController, PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKAddPaymentPassViewController : UIViewController {
    id<PKAddPaymentPassViewControllerDelegate> _delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddPaymentPassViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKAddPaymentPassViewControllerDelegate> delegate;

+ (BOOL)canAddPaymentPass;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (void).cxx_destruct;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (id)initWithCoder:(id)a0;
- (long long)modalPresentationStyle;
- (id)initWithRequestConfiguration:(id)a0 delegate:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
