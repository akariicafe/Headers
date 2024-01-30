@class NSArray;

@interface SeymourUI.TVRootViewController : UIViewController {
    void /* unknown type, empty encoding */ engagementPresentability;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ avatarFetcher;
    void /* unknown type, empty encoding */ contentAvailabilityClient;
    void /* unknown type, empty encoding */ engagementPresentationCoordinator;
    void /* unknown type, empty encoding */ marketingMetricFieldsProvider;
    void /* unknown type, empty encoding */ remoteBrowsingSource;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ rootMenuPresenter;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ shouldSendBrowsingBegan;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ menuView;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)handleSignInTapped;
- (void)handleSignOutButtonLongPress;
- (void)handleSignOutTapped;

@end
