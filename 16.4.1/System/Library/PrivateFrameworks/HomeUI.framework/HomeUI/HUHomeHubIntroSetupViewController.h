@class OBBoldTrayButton, OBLinkTrayButton, UIActivityIndicatorView, HFHomeKitDispatcher, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubIntroSetupViewController : HUCenterFillOBWelcomeController <HUConfigurationViewControllerFlow, HFHomeManagerObserver, HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (retain, nonatomic) OBLinkTrayButton *cancelButton;
@property (nonatomic) BOOL moreThanOneHome;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL needsToPresentUpgradeFailedAlert;
@property (nonatomic) BOOL isViewVisible;
@property (retain, nonatomic) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic) BOOL iCloudURLIsReachableViaWiFi;
@property (nonatomic) struct __SCNetworkReachability { } *reachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)_openURL:(id)a0;
- (void)_cleanUp;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)homeManager:(id)a0 didUpdateHH2MigrationInProgressState:(BOOL)a1;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)_showSpinner;
- (void)_cancelFlow;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_completeSetup;
- (BOOL)_hasHomesWithiPadOnlyHub;
- (BOOL)_hasiPadOnlyHubInHome:(id)a0;
- (void)_hideSpinner;
- (id)_homesWithoutCompatibleHubsWithSharedUsers;
- (void)_presentUpgradeFailedAlert:(id)a0 message:(id)a1 retryTitle:(id)a2 retryBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)_presentUpgradeFailedDueToHomeHubAlert;
- (BOOL)_shouldShowAppleTVUpdateAlertCard;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentView:(id)a3;
- (Class)onboardingFlowClass;

@end
