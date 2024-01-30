@class BKUIPearlEnrollControllerPreloadedState, BuddySuspendTask, BFFBackupDeviceController, BYChronicle, BYSeedProgramManager, BuddyEnrollmentCoordinator, BuddyNetworkProvider, BuddyMiscState, OBWelcomeController, NSString, LAContext, ProximitySetupController, BuddyDisplayZoomExecutor, BYPreferencesController, BuddyPendingRestoreState, BuddyInternalSkipInfoProvider, BuddySetupMethod, BuddyExistingSettings, BuddySystemTimeUpdateManager, BuddyBetaEnrollmentStateManager;
@protocol BYDeviceProvider, BFFFaceIDViewControllerDelegate;

@interface BFFFaceIDViewController : UIViewController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
}

@property (nonatomic) BOOL shouldShowWallet;
@property (retain, nonatomic) OBWelcomeController *contentController;
@property (nonatomic) BOOL completesOnCancel;
@property (readonly, nonatomic) BOOL inDemo;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (retain, nonatomic) id<BYDeviceProvider> deviceProvider;
@property (retain, nonatomic) LAContext *authContext;
@property (weak, nonatomic) id<BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property (retain, nonatomic) BuddySuspendTask *suspendTask;
@property (retain, nonatomic) BuddyPendingRestoreState *pendingRestoreState;
@property (retain, nonatomic) BYChronicle *chronicle;
@property (retain, nonatomic) BuddyMiscState *miscState;
@property (retain, nonatomic) ProximitySetupController *proximitySetupController;
@property (retain, nonatomic) BFFBackupDeviceController *backupDeviceController;
@property (retain, nonatomic) BuddySystemTimeUpdateManager *systemTimeUpdateManager;
@property (retain, nonatomic) BuddyExistingSettings *existingSettings;
@property (retain, nonatomic) BuddyEnrollmentCoordinator *enrollmentCoordinator;
@property (copy, nonatomic) id /* block */ menuButtonPressedBlock;
@property (copy, nonatomic) id /* block */ showModalWiFiSettingsBlock;
@property (copy, nonatomic) id /* block */ writeGreenInformedDefaultPlistIfNecessaryBlock;
@property (copy, nonatomic) id /* block */ doesRestartFlowCauseEraseBlock;
@property (copy, nonatomic) id /* block */ connectedToWiFiAfterProximityBlock;
@property (copy, nonatomic) id /* block */ prepareForCloudRestoreRebootBlock;
@property (copy, nonatomic) id /* block */ exitBuddyForDemoSetUpBlock;
@property (copy, nonatomic) id /* block */ prepareForDeviceMigrationBlock;
@property (copy, nonatomic) id /* block */ startDeviceMigrationBlock;
@property (retain, nonatomic) BuddyDisplayZoomExecutor *displayZoomExecutor;
@property (retain, nonatomic) BYSeedProgramManager *seedProgramManager;
@property (retain, nonatomic) BuddyNetworkProvider *networkProvider;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
@property (retain, nonatomic) BuddySetupMethod *setupMethod;
@property (copy, nonatomic) id /* block */ willPerformSoftwareUpdateBlock;
@property (retain, nonatomic) BuddyBetaEnrollmentStateManager *betaEnrollmentStateManager;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_sheetMode;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)_userDidTapCancelButton:(id)a0;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (void)resetColorsAnimated:(BOOL)a0;
- (id)initInDemo:(BOOL)a0;
- (void)willStartOver;

@end
