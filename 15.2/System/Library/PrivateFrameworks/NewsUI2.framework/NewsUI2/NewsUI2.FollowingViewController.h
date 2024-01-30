@class UIView;

@interface NewsUI2.FollowingViewController : TUViewController <TSFollowingViewControllerType, UISearchBarDelegate, TSViewControllerTabbable, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ searchProvider;
    void /* unknown type, empty encoding */ lazySearchController;
    void /* unknown type, empty encoding */ lazySearchResultsViewController;
    void /* unknown type, empty encoding */ lazySearchHomeViewController;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ searchBarCanEndEditing;
    void /* unknown type, empty encoding */ previousSelectedIndexPath;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ newsActivityManager;
    void /* unknown type, empty encoding */ onAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarBarButtonItem;
}

@property (nonatomic, readonly) UIView *contentView;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (id)contentScrollView;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)a0;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)handleSidebarWithSender:(id)a0;
- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)delete:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
