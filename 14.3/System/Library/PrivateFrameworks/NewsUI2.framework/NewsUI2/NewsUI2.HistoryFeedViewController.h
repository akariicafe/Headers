@interface NewsUI2.HistoryFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ newsActivityManager;
    void /* unknown type, empty encoding */ clearButton;
}

- (void)clearHistory;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewWillObsureView;
- (void)tabBarSplitViewDidUnobsureView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
