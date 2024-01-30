@class UIView;

@interface NewsUI2.FollowingViewController : TUViewController <TSFollowingViewControllerType, UISearchBarDelegate, TSViewControllerTabbable, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ searchProvider;
    void /* unknown type, empty encoding */ lazySearchViewController;
    void /* unknown type, empty encoding */ lazySearchResultsViewController;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ alertPresenter;
    void /* unknown type, empty encoding */ previousSelectedIndexPath;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ newsActivityManager;
}

@property (nonatomic, readonly) UIView *contentView;

- (id)contentScrollView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)editButtonTapped;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)delete:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
