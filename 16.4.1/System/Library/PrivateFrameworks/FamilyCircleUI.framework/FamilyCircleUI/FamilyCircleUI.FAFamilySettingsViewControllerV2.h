@class NSURL, NSString;

@interface FamilyCircleUI.FAFamilySettingsViewControllerV2 : FARestorableViewController <FamilyCircleUI.FAFamilySettingsPageSwiftUIDelegate> {
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ subscriptionsDataLoader;
    void /* unknown type, empty encoding */ grandSlamSigner;
    void /* unknown type, empty encoding */ pictureStore;
    void /* unknown type, empty encoding */ accountManager;
    void /* unknown type, empty encoding */ activityIndicatorView;
    void /* unknown type, empty encoding */ activityIndicatorViewForAdd;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ locationViewModel;
    void /* unknown type, empty encoding */ familySettingsHelper;
    void /* unknown type, empty encoding */ addMemberButton;
    void /* unknown type, empty encoding */ currentStateController;
    void /* unknown type, empty encoding */ peopleDiscoveryService;
    void /* unknown type, empty encoding */ appleCashHandler;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)addFamilyMemberButtonWasTapped;
- (void)didSelectSubscriptionWithURL:(NSURL *)a0 completion:(void (^)(void))a1;
- (void)didSelectSubscriptionWithURLMemberDetails:(NSURL *)a0 familyMemberDSID:(NSString *)a1 serviceName:(long long)a2 completion:(void (^)(void))a3;
- (void)pendingFamilyMemberWasTapped:(id)a0;
- (void)stopFamilySharing;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)familyDidChangeWithNotification:(id)a0;
- (id)initWithAppleAccount:(id)a0 grandSlamSigner:(id)a1 familyCircle:(id)a2 subscriptionsDataLoader:(id)a3 pictureStore:(id)a4 accountManager:(id)a5 peopleDiscoveryService:(id)a6;

@end
