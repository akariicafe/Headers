@class NSString, UIVisualEffectView, NSLayoutConstraint, UIViewController;
@protocol ASCredentialRequestPaneViewControllerDelegate;

@interface ASCredentialRequestContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
    NSLayoutConstraint *_sheetHeightConstraint;
    NSLayoutConstraint *_sheetPresentedConstraint;
}

@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_clearPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;

@end
