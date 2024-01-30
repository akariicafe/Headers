@class NSArray, NSString, UITabBarItem, UIViewController;

@interface TSTransitionContainerViewController : UIViewController <TSTabBarSplitViewAutoObserver, TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ disableSidebarBarButtonItem;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ backBarButtonItem;
    void /* unknown type, empty encoding */ nextDisplayMode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarBarButtonItem;
    void /* unknown type, empty encoding */ doneBarButtonItem;
    void /* unknown type, empty encoding */ transition;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) NSArray *leftBarButtonItems;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, readonly) BOOL isSearchResultsPane;
@property (nonatomic, readonly) NSString *description;

- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleDismiss;
- (void)handleSidebarWithSender:(id)a0;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)a0;
- (void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0 identifier:(id)a1;

@end
