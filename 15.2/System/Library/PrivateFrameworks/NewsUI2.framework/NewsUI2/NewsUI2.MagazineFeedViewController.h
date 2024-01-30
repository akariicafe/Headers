@interface NewsUI2.MagazineFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUKeyCommandTraversable, TUDeselectable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ barCompressionManager;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ mastheadStyleOptionsProvider;
    void /* unknown type, empty encoding */ feedPaywallConfigFactory;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ bundlePurchasePrewarmer;
    void /* unknown type, empty encoding */ heightChangeRelayoutThreshold;
    void /* unknown type, empty encoding */ viewportFromLastRelayout;
    void /* unknown type, empty encoding */ commandContainer;
    void /* unknown type, empty encoding */ newsActivityManager;
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)deselect;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
