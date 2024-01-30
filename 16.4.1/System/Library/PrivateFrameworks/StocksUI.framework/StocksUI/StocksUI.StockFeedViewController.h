@interface StocksUI.StockFeedViewController : UIViewController <UICollectionViewDelegate, EKEventEditViewDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ stock;
    void /* unknown type, empty encoding */ stockListSelection;
    void /* unknown type, empty encoding */ cardViewScrollViewCoordinator;
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ stockFeedTitleView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ toolbarTitleIsHidden;
    void /* unknown type, empty encoding */ commandContainer;
    void /* unknown type, empty encoding */ commandTracker;
    void /* unknown type, empty encoding */ watchState;
    void /* unknown type, empty encoding */ earningsCalendarManager;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ prewarmState;
    void /* unknown type, empty encoding */ latestQuote;
    void /* unknown type, empty encoding */ newlyAddedEventToCalendar;
    void /* unknown type, empty encoding */ earnings;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)didMoveToParentViewController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
