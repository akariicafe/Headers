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

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)enqueueScreenUnlockAction:(id /* block */)a0 withIdentifier:(id)a1;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_tccChanged;
- (void)updateExistingConsentForPhase1ActiveRegion:(long long)a0;
- (BOOL)isDeviceUnlocked;
- (id)activeRegionForExposureDetectionManager:(id)a0;
- (id)advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)a0 error:(id *)a1;
- (void)applicationsDidInstall:(id)a0;
- (id)_readPreferenceRegionPendingOnboarding;
- (void)_configurationManagerEnsureStarted;
- (void)presentBuddyForRegion:(id)a0 errorHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)configurationManager:(id)a0 exposureNotificationRegionConfigurationChanged:(id)a1;
- (void)_bluetoothMonitorEnsureStarted;
- (void)postENOffNotification;
- (void)_disableAvailabilityAlertIfNeeded;
- (long long)tccAccessForBundleID:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (unsigned char)_getAvailabilityAlertCountIncrement:(BOOL)a0 reset:(BOOL)a1;
- (void)_regionMonitorEnsureStarted;
- (id)legacyHistoryPath;
- (id)temporaryExposureKeyManager:(id)a0 retrieveTEKHistoryIncludingActive:(BOOL)a1 generateNewTEK:(BOOL)a2;
- (void)enqueuePreauthorizedTestVerificationUnlockAction;
- (BOOL)_postExposureNotificationForClassification:(id)a0 status:(long long)a1 region:(id)a2;
- (id)_getDownloadEndpointsAndReturnError:(id *)a0;
- (void)_setActiveRegionForApp:(id)a0 infoDict:(id)a1;
- (void)configurationManager:(id)a0 errorDetected:(unsigned int)a1;
- (void)postAnalyticsOptInNotificationForRegion:(id)a0;
- (id)getExposureDatabaseAndReturnError:(id *)a0;
- (void)_update;
- (void)xpcReportStatus;
- (void)xpcConnectionInvalidated:(id)a0;
- (void)_differentialPrivacyEnsureStopped;
- (void)onboardingManagerDidObserveDeviceUnlock:(id)a0;
- (void)exposureDetectionManager:(id)a0 finishedSessionWithResult:(id)a1;
- (void)postMonthlySummaryNotificationForAppBundleIdentifier:(id)a0;
- (void)_periodicPersistencePurge;
- (void)_schedulePeriodicPersistencePurge;
- (id)regionForBundleInfo:(id)a0;
- (id)_getReportTypeForSession:(id)a0;
- (void)postOnboardingNotificationForRegion:(id)a0;
- (void)_activate;
- (void)_xpcListenerEvent:(id)a0;
- (void)_handleTestVerificationErrors:(id)a0;
- (void)_exposureManagersEnsureStarted;
- (void)onboardingTriggerDeactivate;
- (void)_resetDeveloperSettings;
- (void)xpcPreAuthorizedDiagnosisKeysAvailable;
- (void)_regionMonitorEnsureStopped;
- (void)_fetchPrefRegionConfig:(id)a0 oldCustomCountryCode:(id)a1;
- (void)textMessageManager:(id)a0 errorDetected:(unsigned int)a1;
- (void)_exposureNotificationRegionConfigurationRemoved:(id)a0;
- (BOOL)_shouldDisableMonthlySummary;
- (id)descriptionWithLevel:(int)a0;
- (void)bluetoothPowerStateChanged;
- (void)postTestVerificationReceivedNotification:(id)a0 region:(id)a1 reportType:(unsigned int)a2;
- (void)_bluetoothTracingEnsureStopped;
- (void)onboardingTriggerResumeIfNeeded;
- (void)_postUserNotificationWithRequest:(id)a0 authorizationFailureHandler:(id /* block */)a1;
- (void)_updateOverallStatus;
- (BOOL)_getExposureMatchAttemptBool;
- (id)loadHistorySinceTime:(double)a0;
- (void)exposureDetectionManager:(id)a0 errorDetected:(unsigned int)a1;
- (unsigned char)_getLatestExposureForDifferentialPrivacy;
- (void)configurationManager:(id)a0 didResolveCurrentRegion:(BOOL)a1;
- (id)_getInfoDictFromBundle:(struct __CFBundle { } *)a0;
- (void)_resetDataWithFlags:(unsigned int)a0;
- (void)prefsChanged;
- (void)postPreAuthorizationNotificationForRegion:(id)a0;
- (void)appLaunchWithBundleID:(id)a0 activity:(unsigned int)a1 shouldEnterForeground:(BOOL)a2 requiredRuntimeInSeconds:(int)a3;
- (void)monthlyTriggerActivateWithIntervalOverride:(unsigned int)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)fetchServerConfigurationForAppBundleIdentifier:(id)a0 infoDictionary:(id)a1;
- (BOOL)_bluetoothMonitorShouldRun;
- (void)postExposureSummaryAccessNotificationWithAppBundleIdentifier:(id)a0 string:(id)a1;
- (id)xpcConnectionForBundleID:(id)a0;
- (void)_enApplicationDidUninstall:(id)a0;
- (BOOL)isProxyEnabledForTestResultManager:(id)a0;
- (BOOL)_writePreferenceActiveEntity:(id)a0;
- (id)_getDelegateAndReturnError:(id *)a0;
- (void)_exposureManagersEnsureStopped;
- (id)_readPreferenceActiveEntity;
- (void)_enApplicationDidInstall:(id)a0;
- (void)startAvailabilityAlertCycleWithBuddy:(BOOL)a0;
- (void)_xpcConnectionAccept:(id)a0;
- (void)_bluetoothTracingStop;
- (id)init;
- (void)_bluetoothMonitorEnsureStopped;
- (void)startServerConfigurationFetchForRegion:(id)a0;
- (void)postGeneralNotificationWithTitle:(id)a0 message:(id)a1;
- (void)activate;
- (BOOL)isOnboardingNeeded;
- (void)_bluetoothTracingEnsureStarted;
- (BOOL)_isNKDActive;
- (void)_configurationManagerEnsureStopped;
- (void)_databasesEnsureOpened;
- (void)_turnOffEN;
- (BOOL)_writePreferenceRegionPendingOnboarding:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (unsigned char)_getLegalConsentPageCount;
- (void)fetchServerConfigurationForRegion:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)_updatePhase1ConfigurationIfNeeded:(id)a0;
- (void)postExposureNotification:(id)a0;
- (void)_databasesEnsureClosed;
- (id)_getReportTypeFromMetadata:(id)a0;
- (void)tearDownAlertHandle;
- (unsigned int)appDequeueActivityFlagsWithBundleID:(id)a0;
- (void)_scheduleUpdate;
- (void)_differentialPrivacyEnsureStarted;
- (void)pauseUpdate;
- (id)loadLegacyHistorySinceTime:(double)a0;
- (void)_invalidate;
- (long long)getOverallStatus;
- (id)_getBundleIDFromBundle:(struct __CFBundle { } *)a0;
- (void)_networkProxyStatusCheck;
- (void)_startPreauthorizedTestVerificationAction;
- (void).cxx_destruct;
- (id)_getInfoDictFromAppProxy:(id)a0;
- (void)_enqueueScreenUnlockAction:(id /* block */)a0 withIdentifier:(id)a1;
- (void)_migrateLegacyHistoryIfNecessary;
- (id)exposureDetectionManager:(id)a0 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)a1 error:(id *)a2;
- (void)monthlyTriggerDeactivate;
- (void)notifyUserWithStatus:(long long)a0;
- (void)_exposureNotificationRegionConfigurationChanged:(id)a0;
- (double)timeForAvailabilityAlertCycleReset;
- (void)onboardingTriggerRetry:(unsigned int)a0;
- (void)_deferConsentForPendingRegion;
- (id)_getDiagnosedVaccineStatusForDifferentialPrivacyWithUserVaccinationStatus:(id)a0;
- (void)configurationManager:(id)a0 exposureNotificationRegionConfigurationRemovedForRegion:(id)a1;

@end
