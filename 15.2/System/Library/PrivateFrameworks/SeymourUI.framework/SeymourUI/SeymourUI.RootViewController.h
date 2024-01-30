@interface SeymourUI.RootViewController : UIViewController {
    void /* unknown type, empty encoding */ engagementPresentability;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ avatarSettingsProvider;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ catalogClient;
    void /* unknown type, empty encoding */ contentInsetInitialBehavior;
    void /* unknown type, empty encoding */ currentContentInsetBehavior;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ engagementPresentationCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ marketingMetricFieldsProvider;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ accountButton;
    void /* unknown type, empty encoding */ subscriptionToken;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)accountButtonTapped:(id)a0;

@end
