@class UINavigationController, NSString, PRXCardContainerView, PRXTransitioningController, PRXFlowConfiguration, PRXPullDismissalInteractionDriver, UIViewController;
@protocol PRXFlowDelegate;

@interface PRXCardContainerViewController : UIViewController <PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate> {
    PRXTransitioningController *_transitionController;
    PRXCardContainerView *_container;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _containerLayoutMargins;
    BOOL _legacyCard;
}

@property (copy, nonatomic) id /* block */ didShowViewController;
@property (readonly, nonatomic) PRXFlowConfiguration *configuration;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) UINavigationController *mainNavigationController;
@property (weak, nonatomic) id<PRXFlowDelegate> flowDelegate;
@property (readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_commonInit;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)backgroundTapped:(id)a0;
- (long long)_cardStyleForContentContainer:(id)a0;
- (struct CGSize { double x0; double x1; })_maximumCardSizeForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_shouldLayoutViewControllerBeforeCalculatingSize:(id)a0;
- (void)_updateCardSizeClassForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateContainerPreferredContentSize;
- (void)_updatePreferredContentSizeForViewController:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initAsSingleCardWithContentViewController:(id)a0 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 configuration:(id)a2;

@end
