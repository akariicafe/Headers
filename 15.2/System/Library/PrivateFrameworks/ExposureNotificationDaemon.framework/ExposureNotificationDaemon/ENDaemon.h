@class ENOnboardingManager, SBSRemoteAlertHandle, NSString, NSMutableSet, NSMutableDictionary, ENTestResultManager, ENRegionMonitor, ENExposureDetectionManager, ENUserAlert, ENXPCTimer, NSObject, ENDifferentialPrivacyManager, ENDownloadManager, ENRegion, CUSystemMonitor, PrivacyProxyServiceStatus, ENTemporaryExposureKeyManager, ApplicationObserver, ENExposureDatabase, ENTextMessageManager, ENConfigurationManager, SFClient, ENActiveEntity, NSBackgroundActivityScheduler, NSMutableOrderedSet, UNUserNotificationCenter;
@protocol OS_xpc_object, ENDaemonDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ENDaemon : NSObject <ApplicationObserver, ENConfigurationManagerDelegate, ENExposureDetectionManagerDelegate, ENOnboardingManagerDelegate, ENTemporaryExposureKeyManagerDelegate, ENTestResultManagerDelegate, ENTextMessageManagerDelegate, SBSRemoteAlertHandleObserver, UNUserNotificationCenterDelegate> {
    ApplicationObserver *_applicationObserver;
    BOOL _activateCalled;
    BOOL _btMonitorStarted;
    ENExposureDatabase *_exposureDatabase;
    NSObject<OS_dispatch_source> *_pauseTimer;
    int _prefsChangedNotifyToken;
    int _profileChangedNotifyToken;
    int _proxyStatusChangedNotifyToken;
    int _proxyConfigChangedNotifyToken;
    int _screenLockNotifyToken;
    unsigned long long _startTicks;
    unsigned long long _startTicksFull;
    unsigned long long _stateHandler;
    int _tccChangedNotifyToken;
    BOOL _updatePending;
    NSMutableSet *_xpcConnections;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (copy, nonatomic) ENActiveEntity *activeEntity;
@property (retain, nonatomic) NSMutableDictionary *appActivities;
@property (nonatomic) BOOL automaticRegionSwitchEnabled;
@property (nonatomic) BOOL availabilityAlertDisabled;
@property (nonatomic) long long travelStatus;
@property (copy, nonatomic) NSString *btTracingAppID;
@property (retain, nonatomic) ENConfigurationManager *configurationManager;
@property (retain, nonatomic) ENDifferentialPrivacyManager *differentialPrivacyManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchExposureDetectionManagingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchDownloadManagingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchTestResultManagingQueue;
@property (retain, nonatomic) ENDownloadManager *downloadManager;
@property (retain, nonatomic) ENExposureDetectionManager *exposureDetectionManager;
@property (retain, nonatomic) ENOnboardingManager *onboardingManager;
@property (nonatomic) BOOL onboardingFirstTime;
@property (nonatomic) long long onboardingLegalConsentLastViewCount;
@property (nonatomic) unsigned int onboardingTrigger;
@property (retain, nonatomic) ENRegion *onboardingRegionTrigger;
@property (nonatomic) long long overallStatus;
@property (retain, nonatomic) NSBackgroundActivityScheduler *persistencePurgeScheduler;
@property (retain, nonatomic) NSMutableOrderedSet *previouslyTrackedApps;
@property (retain, nonatomic) ENRegionMonitor *regionMonitor;
@property (retain, nonatomic) NSMutableDictionary *remoteUISessions;
@property (retain, nonatomic) NSMutableDictionary *screenUnlockPendingActions;
@property (readonly, nonatomic) unsigned int stateMetricVersion;
@property (retain, nonatomic) CUSystemMonitor *systemMonitor;
@property (retain, nonatomic) ENTemporaryExposureKeyManager *temporaryExposureKeyManager;
@property (retain, nonatomic) ENTestResultManager *testResultManager;
@property (retain, nonatomic) ENTextMessageManager *textMessageManager;
@property (retain, nonatomic) ENUserAlert *userAlert;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (nonatomic) BOOL wasInRestrictedStatus;
@property (nonatomic) BOOL wasInDifferentActiveRegion;
@property (nonatomic) BOOL monthlySummaryDisabled;
@property (retain, nonatomic) ENXPCTimer *monthlyNotificationTimer;
@property (retain, nonatomic) ENXPCTimer *onboardingTimer;
@property (nonatomic) BOOL prefAggressiveScanning;
@property (nonatomic) BOOL prefConfigurationManagerEnabled;
@property (nonatomic) double prefDatabasePurgeInterval;
@property (nonatomic) BOOL prefDeveloperServerConfiguration;
@property (nonatomic) BOOL prefEnableNKD;
@property (nonatomic) double prefServerConfigurationRefreshInterval;
@property (nonatomic) long long prefDifferentialPrivacyConsent;
@property (nonatomic) BOOL prefEnabled;
@property (nonatomic) BOOL prefLoggingSensitive;
@property (nonatomic) BOOL prefLoggingRPI;
@property (nonatomic) BOOL prefPaused;
@property (nonatomic) BOOL prefNetworkProxyEnabled;
@property (nonatomic) unsigned int prefRateLimitMaxAPICount;
@property (nonatomic) unsigned int prefRateLimitMaxAPICountV2;
@property (copy, nonatomic) NSString *prefRegionIdentifierOverride;
@property (nonatomic) BOOL prefRegionMonitorTestMode;
@property (nonatomic) BOOL prefServerForceDisable;
@property (nonatomic) BOOL prefSkipExposureWindowShuffling;
@property (nonatomic) BOOL prefSkipFileSigning;
@property (nonatomic) BOOL prefStoreDemoMode;
@property (nonatomic) BOOL prefTCCAllowWithoutApps;
@property (nonatomic) unsigned int usageUserEnabled;
@property (nonatomic) unsigned int usageUserDisabled;
@property (nonatomic) unsigned int usageUserPaused;
@property (nonatomic) unsigned int usageUserUnpaused;
@property (nonatomic) unsigned int usageUserAlertShare;
@property (nonatomic) unsigned int usageUserAlertDontShare;
@property (nonatomic) unsigned int usageUserAlertReset;
@property (nonatomic) unsigned int usageUserAlertDontReset;
@property (nonatomic) unsigned int usageManagerActivate;
@property (nonatomic) unsigned int usageGetDiagnosisKeys;
@property (nonatomic) unsigned int usageResetAllData;
@property (nonatomic) unsigned int usageExposureDetectFileActivate;
@property (nonatomic) unsigned int usageExposureDetectFileAddKeys;
@property (nonatomic) unsigned int usageExposureDetectFileFinish;
@property (nonatomic) unsigned int usageExposureDetectFileGetExposures;
@property (nonatomic) unsigned int usageExposureDetectFileGetExposureWindows;
@property (retain, nonatomic) SBSRemoteAlertHandle *buddyAlertHandle;
@property (retain, nonatomic) SFClient *sharingClient;
@property (retain, nonatomic) PrivacyProxyServiceStatus *networkProxyStatus;
@property (nonatomic) unsigned long long networkProxyTraffic;
@property (weak, nonatomic) id<ENDaemonDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsFaceID;

- (void)xpcPreAuthorizedDiagnosisKeysAvailable;
- (void)prefsChanged;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)xpcConnectionForBundleID:(id)a0;
- (void)_setActiveRegionForApp:(id)a0 infoDict:(id)a1;
- (void)_updatePhase1ConfigurationIfNeeded:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)configurationManager:(id)a0 exposureNotificationRegionConfigurationRemovedForRegion:(id)a1;
- (id)legacyHistoryPath;
- (void)_enApplicationDidUninstall:(id)a0;
- (void)configurationManager:(id)a0 errorDetected:(unsigned int)a1;
- (BOOL)isOnboardingNeeded;
- (void)fetchServerConfigurationForAppBundleIdentifier:(id)a0 infoDictionary:(id)a1;
- (void)_bluetoothTracingEnsureStopped;
- (id)loadHistorySinceTime:(double)a0;
- (id)_getDownloadEndpointsAndReturnError:(id *)a0;
- (void)postExposureNotification:(id)a0;
- (void)_configurationManagerEnsureStarted;
- (id)_getReportTypeFromMetadata:(id)a0;
- (void)_differentialPrivacyEnsureStopped;
- (void)fetchServerConfigurationForRegion:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDeviceUnlocked;
- (id)regionForBundleInfo:(id)a0;
- (void)_exposureNotificationRegionConfigurationRemoved:(id)a0;
- (void)_tccChanged;
- (void)_enApplicationDidInstall:(id)a0;
- (void)_bluetoothMonitorEnsureStarted;
- (unsigned char)_getAvailabilityAlertCountIncrement:(BOOL)a0 reset:(BOOL)a1;
- (void)enqueueScreenUnlockAction:(id /* block */)a0 withIdentifier:(id)a1;
- (void)_invalidate;
- (void)_enqueueScreenUnlockAction:(id /* block */)a0 withIdentifier:(id)a1;
- (void)_disableAvailabilityAlertIfNeeded;
- (void)_migrateLegacyHistoryIfNecessary;
- (unsigned char)_getLegalConsentPageCount;
- (BOOL)_writePreferenceRegionPendingOnboarding:(id)a0;
- (void)bluetoothPowerStateChanged;
- (void)_databasesEnsureOpened;
- (void)_updateOverallStatus;
- (void)postTestVerificationReceivedNotification:(id)a0 region:(id)a1 reportType:(unsigned int)a2;
- (id)descriptionWithLevel:(int)a0;
- (id)advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)a0 error:(id *)a1;
- (void)exposureDetectionManager:(id)a0 errorDetected:(unsigned int)a1;
- (void)_exposureManagersEnsureStarted;
- (void)_deferConsentForPendingRegion;
- (id)activeRegionForExposureDetectionManager:(id)a0;
- (long long)tccAccessForBundleID:(id)a0;
- (void)updateExistingConsentForPhase1ActiveRegion:(long long)a0;
- (void)appLaunchWithBundleID:(id)a0 activity:(unsigned int)a1 shouldEnterForeground:(BOOL)a2 requiredRuntimeInSeconds:(int)a3;
- (void)_schedulePeriodicPersistencePurge;
- (void)_resetDeveloperSettings;
- (BOOL)_writePreferenceActiveEntity:(id)a0;
- (void)_postUserNotificationWithRequest:(id)a0 authorizationFailureHandler:(id /* block */)a1;
- (void)postGeneralNotificationWithTitle:(id)a0 message:(id)a1;
- (void)_xpcConnectionAccept:(id)a0;
- (void)postPreAuthorizationNotificationForRegion:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)_networkProxyStatusCheck;
- (id)_getBundleIDFromBundle:(struct __CFBundle { } *)a0;
- (void)monthlyTriggerActivateWithIntervalOverride:(unsigned int)a0;
- (BOOL)_bluetoothMonitorShouldRun;
- (void)_xpcListenerEvent:(id)a0;
- (BOOL)_postExposureNotificationForClassification:(id)a0 status:(long long)a1 region:(id)a2;
- (unsigned char)_getLatestExposureForDifferentialPrivacy;
- (id)_getDelegateAndReturnError:(id *)a0;
- (void)pauseUpdate;
- (void)startAvailabilityAlertCycleWithBuddy:(BOOL)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)onboardingTriggerRetry:(unsigned int)a0;
- (void)_periodicPersistencePurge;
- (void)_turnOffEN;
- (id)init;
- (void)_regionMonitorEnsureStopped;
- (void)_resetDataWithFlags:(unsigned int)a0;
- (void)notifyUserWithStatus:(long long)a0;
- (void)_activate;
- (void)_startPreauthorizedTestVerificationAction;
- (id)_readPreferenceRegionPendingOnboarding;
- (void)postMonthlySummaryNotificationForAppBundleIdentifier:(id)a0;
- (void)_exposureManagersEnsureStopped;
- (void)postENOffNotification;
- (void)startServerConfigurationFetchForRegion:(id)a0;
- (void)xpcConnectionInvalidated:(id)a0;
- (void)presentBuddyForRegion:(id)a0 errorHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)textMessageManager:(id)a0 errorDetected:(unsigned int)a1;
- (void)_scheduleUpdate;
- (void)postAnalyticsOptInNotificationForRegion:(id)a0;
- (id)_readPreferenceActiveEntity;
- (void)onboardingTriggerResumeIfNeeded;
- (void)_fetchPrefRegionConfig:(id)a0 oldCustomCountryCode:(id)a1;
- (id)_getInfoDictFromBundle:(struct __CFBundle { } *)a0;
- (BOOL)_getExposureMatchAttemptBool;
- (BOOL)_isNKDActive;
- (void)_handleTestVerificationErrors:(id)a0;
- (void)_databasesEnsureClosed;
- (void)enqueuePreauthorizedTestVerificationUnlockAction;
- (void)invalidate;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_update;
- (double)timeForAvailabilityAlertCycleReset;
- (long long)getOverallStatus;
- (id)getExposureDatabaseAndReturnError:(id *)a0;
- (void)configurationManager:(id)a0 didResolveCurrentRegion:(BOOL)a1;
- (void)postExposureSummaryAccessNotificationWithAppBundleIdentifier:(id)a0 string:(id)a1;
- (id)_getInfoDictFromAppProxy:(id)a0;
- (void)postOnboardingNotificationForRegion:(id)a0;
- (void)xpcReportStatus;
- (void)tearDownAlertHandle;
- (void)_bluetoothTracingEnsureStarted;
- (void)_differentialPrivacyEnsureStarted;
- (void)monthlyTriggerDeactivate;
- (void)_regionMonitorEnsureStarted;
- (void)_exposureNotificationRegionConfigurationChanged:(id)a0;
- (id)_getDiagnosedVaccineStatusForDifferentialPrivacyWithUserVaccinationStatus:(id)a0;
- (void)configurationManager:(id)a0 exposureNotificationRegionConfigurationChanged:(id)a1;
- (void)onboardingManagerDidObserveDeviceUnlock:(id)a0;
- (BOOL)isProxyEnabledForTestResultManager:(id)a0;
- (void)exposureDetectionManager:(id)a0 finishedSessionWithResult:(id)a1;
- (void)_bluetoothTracingStop;
- (id)_getReportTypeForSession:(id)a0;
- (void)_bluetoothMonitorEnsureStopped;
- (BOOL)_shouldDisableMonthlySummary;
- (id)temporaryExposureKeyManager:(id)a0 retrieveTEKHistoryIncludingActive:(BOOL)a1 generateNewTEK:(BOOL)a2;
- (void)_configurationManagerEnsureStopped;
- (id)loadLegacyHistorySinceTime:(double)a0;
- (unsigned int)appDequeueActivityFlagsWithBundleID:(id)a0;
- (id)exposureDetectionManager:(id)a0 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)a1 error:(id *)a2;
- (void)onboardingTriggerDeactivate;

@end
