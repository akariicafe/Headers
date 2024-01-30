@class NSArray, UIViewController;

@interface TeaUI.TabBarSplitViewController : UISplitViewController <UISplitViewControllerDelegate, TSTabBarSplitViewFocusable> {
    void /* unknown type, empty encoding */ extendedDelegate;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ presentationContextCache;
    void /* unknown type, empty encoding */ stagedModalContextCache;
    void /* unknown type, empty encoding */ modalContextCache;
    void /* unknown type, empty encoding */ fullscreenTransitionCoverManager;
    void /* unknown type, empty encoding */ appearanceViewControllers;
    void /* unknown type, empty encoding */ restoreStateCache;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ hasPerformedInitialLayout;
    void /* unknown type, empty encoding */ splitViewFocus;
    void /* unknown type, empty encoding */ secondaryNavigationControllerIdentifierBeforeCollapse;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) long long currentSplitViewFocus;

- (BOOL)splitViewController:(id)a0 collapseSecondaryViewController:(id)a1 ontoPrimaryViewController:(id)a2;
- (id)splitViewController:(id)a0 separateSecondaryViewControllerFromPrimaryViewController:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)splitViewController:(id)a0 showDetailViewController:(id)a1 sender:(id)a2;
- (void)loadView;
- (void)presentationTransitionDidEndWithNotification:(id)a0;
- (void)dismissalTransitionDidEndWithNotification:(id)a0;
- (BOOL)splitViewController:(id)a0 showViewController:(id)a1 sender:(id)a2;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (long long)targetDisplayModeForActionInSplitViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)tabBarNavigationControllerDidPopWithNotification:(id)a0;
- (void)toggleResponderPane;
- (void)toggleSideBarVisibility;
- (void)toggleSplitViewFocusTo:(long long)a0;
- (void)splitViewControllerDidCollapse:(id)a0;
- (void)splitViewControllerDidExpand:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
