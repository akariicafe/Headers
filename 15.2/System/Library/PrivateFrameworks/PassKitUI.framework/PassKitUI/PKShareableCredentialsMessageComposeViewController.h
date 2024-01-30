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
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
