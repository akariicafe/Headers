@class PKAddPaymentPassRequestConfiguration, NSString, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController, PKCancelingAnimatedTransitioningHandler;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKAddPaymentPassViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    id<PKAddPaymentPassViewControllerDelegate> _delegate;
    PKAddPaymentPassRequestConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddPaymentPassViewController *_remoteVC;
    PKCancelingAnimatedTransitioningHandler *_animatedTransitionHandler;
}

@property (weak, nonatomic) id<PKAddPaymentPassViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddPaymentPass;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForPresentation:(id)a0;
- (id)childViewControllerForStatusBarHidden;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithRequestConfiguration:(id)a0 delegate:(id)a1;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)a0;
- (void)loadRemoteViewController;

@end
