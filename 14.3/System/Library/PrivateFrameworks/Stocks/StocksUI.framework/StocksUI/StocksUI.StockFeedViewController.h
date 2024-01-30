@interface StocksUI.StockFeedViewController : UIViewController <UICollectionViewDelegate, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ stock;
    void /* unknown type, empty encoding */ stockListSelection;
    void /* unknown type, empty encoding */ cardViewScrollViewCoordinator;
    void /* unknown type, empty encoding */ alertPresenter;
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ stockFeedTitleView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ priceViewModel;
    void /* unknown type, empty encoding */ toolbarTitleIsHidden;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewWillObsureView;
- (void)tabBarSplitViewDidUnobsureView;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
