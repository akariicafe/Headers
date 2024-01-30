@interface SeymourUI.RootViewController : UIViewController {
    void /* unknown type, empty encoding */ contentInsetsBehavior;
    void /* unknown type, empty encoding */ engagementPresentability;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ avatarSettingsProvider;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ engagementPresentationCoordinator;
    void /* unknown type, empty encoding */ marketingMetricFieldsProvider;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ catalogClient;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)accountButtonTapped:(id)a0;

@end
