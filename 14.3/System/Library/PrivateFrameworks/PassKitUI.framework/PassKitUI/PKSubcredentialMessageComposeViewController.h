@class PKAppletSubcredentialSharingRequest, PKRemoteSubcredentialMessageComposeViewController, _UIAsyncInvocation;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKSubcredentialMessageComposeViewController : UIViewController {
    id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
    _UIAsyncInvocation *_remoteVCRequest;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKRemoteSubcredentialMessageComposeViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;

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
- (id)initWithSharingRequest:(id)a0 delegate:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
