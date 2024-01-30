@class UITapGestureRecognizer, NSString, UIVisualEffectView, UIViewController;
@protocol ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate;

@interface ASCredentialRequestContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (nonatomic) struct CGSize { double width; double height; } containerContentSize;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id<ASCredentialRequestContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_handleTapGesture:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_shouldDismiss;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissalFrameForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContainerContentSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_layoutContainerView:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_clearPaneDelegateForViewController:(id)a0;

@end
