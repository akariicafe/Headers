@class PKRemoteShareableCredentialsMessageComposeViewController, PKAddShareablePassConfiguration, _UIAsyncInvocation;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {
    id<PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
    PKAddShareablePassConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteShareableCredentialsMessageComposeViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKShareableCredentialsMessageComposeViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalTransitionStyle;
- (void).cxx_destruct;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (id)initWithCoder:(id)a0;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
