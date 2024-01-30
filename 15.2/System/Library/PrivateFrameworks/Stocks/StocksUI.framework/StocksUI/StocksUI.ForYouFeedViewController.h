@interface StocksUI.ForYouFeedViewController : UIViewController <UICollectionViewDelegate, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ cardViewScrollViewCoordinator;
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ collapsingAnimator;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ toolbarTitleIsHidden;
    void /* unknown type, empty encoding */ forYouTitleView;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
