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

- (void)_commonInit;
- (id)init;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (void)backgroundTapped:(id)a0;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_updateCardSizeClassForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updatePreferredContentSizeForViewController:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateContainerPreferredContentSize;
- (struct CGSize { double x0; double x1; })_maximumCardSizeForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (long long)_cardStyleForContentContainer:(id)a0;
- (id)initAsSingleCardWithContentViewController:(id)a0 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 configuration:(id)a2;
- (BOOL)_shouldLayoutViewControllerBeforeCalculatingSize:(id)a0;

@end
