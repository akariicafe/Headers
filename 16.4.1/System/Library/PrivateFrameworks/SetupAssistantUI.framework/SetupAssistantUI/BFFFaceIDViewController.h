@class BuddyProximityAutomatedDeviceEnrollmentController, BuddyPasscodeCacheManager, BFFBackupDeviceController, BuddyBetaEnrollmentStateManager, BuddyInternalSkipInfoProvider, BuddySystemTimeUpdateManager, BYAnalyticsManager, BuddySetupMethod, NSString, BuddyPaneFeatureAnalyticsManager, BFFSettingsManager, MCProfileConnection, BuddyActivationRecord, BYPreferencesController, BuddyButtonMonitor, BYSoftwareUpdateCache, BuddyActivationState, BKUIPearlEnrollControllerPreloadedState, BYSeedProgramManager, BuddySuspendTask, ProximitySetupController, OBWelcomeController, BuddyDisplayZoomExecutor, BYChronicle, BuddyPendingRestoreState, LAContext, BuddyExistingSettings, BuddyMiscState, BuddyEnrollmentCoordinator;
@protocol BFFFaceIDViewControllerDelegate, BuddyNetworkProvider, BYRunState, BuddyFeatureFlags, BYCapabilities, BuddyEmergencyExecutor, BuddyCombinedTermsProvider, BYDeviceProvider;

@interface BFFFaceIDViewController : UIViewController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
}

@property (retain, nonatomic) OBWelcomeController *contentController;
@property (nonatomic) BOOL completesOnCancel;
@property (readonly, nonatomic) BOOL inDemo;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (retain, nonatomic) id<BYDeviceProvider> deviceProvider;
@property (retain, nonatomic) LAContext *authContext;
@property (weak, nonatomic) id<BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;
@property (retain, nonatomic) id<BYCapabilities> capabilities;
@property (retain, nonatomic) BuddyPasscodeCacheManager *passcodeCacheManager;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
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
@property (retain, nonatomic) BuddyProximityAutomatedDeviceEnrollmentController *proximityAutomatedDeviceEnrollmentController;
@property (retain, nonatomic) BFFBackupDeviceController *backupDeviceController;
@property (retain, nonatomic) BuddySystemTimeUpdateManager *systemTimeUpdateManager;
@property (retain, nonatomic) BuddyExistingSettings *existingSettings;
@property (retain, nonatomic) BuddyEnrollmentCoordinator *enrollmentCoordinator;
@property (copy, nonatomic) id /* block */ menuButtonPressedBlock;
@property (copy, nonatomic) id /* block */ showModalWiFiSettingsBlock;
@property (copy, nonatomic) id /* block */ writeGreenInformedDefaultPlistIfNecessaryBlock;
@property (copy, nonatomic) id /* block */ doesRestartFlowCauseEraseBlock;
@property (copy, nonatomic) id /* block */ prepareForCloudRestoreRebootBlock;
@property (copy, nonatomic) id /* block */ exitBuddyForDemoSetUpBlock;
@property (copy, nonatomic) id /* block */ prepareForDeviceMigrationBlock;
@property (copy, nonatomic) id /* block */ startDeviceMigrationBlock;
@property (retain, nonatomic) BuddyDisplayZoomExecutor *displayZoomExecutor;
@property (retain, nonatomic) BYSeedProgramManager *seedProgramManager;
@property (retain, nonatomic) id<BuddyNetworkProvider> networkProvider;
@property (retain, nonatomic) BYPreferencesController *buddyPreferencesExcludedFromBackup;
@property (retain, nonatomic) BuddySetupMethod *setupMethod;
@property (copy, nonatomic) id /* block */ willPerformSoftwareUpdateBlock;
@property (retain, nonatomic) BuddyBetaEnrollmentStateManager *betaEnrollmentStateManager;
@property (retain, nonatomic) BYSoftwareUpdateCache *softwareUpdateCache;
@property (retain, nonatomic) BFFSettingsManager *settingsManager;
@property (retain, nonatomic) id<BYRunState> runState;
@property (retain, nonatomic) BYAnalyticsManager *analyticsManager;
@property (retain, nonatomic) BuddyPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (retain, nonatomic) MCProfileConnection *managedConfiguration;
@property (retain, nonatomic) BuddyActivationRecord *activationRecord;
@property (retain, nonatomic) id<BuddyCombinedTermsProvider> combinedTermsProvider;
@property (retain, nonatomic) id<BuddyFeatureFlags> featureFlags;
@property (retain, nonatomic) BuddyButtonMonitor *buttonMonitor;
@property (retain, nonatomic) id<BuddyEmergencyExecutor> emergencyExecutor;
@property (retain, nonatomic) BuddyActivationState *activationState;

- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_sheetMode;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)_userDidTapCancelButton:(id)a0;
- (id)initInDemo:(BOOL)a0;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (void)resetColorsAnimated:(BOOL)a0;
- (void)willStartOver;

@end
