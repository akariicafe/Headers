@class _ATXAppInfoManager, ATXInternalAppRegistrationNotification, ATXSafariIntentEventQualityFilter, NSObject, _ATXDuetHelper, PETScalarEventTracker, PETDistributionEventTracker, _ATXAppLaunchSequenceManager, _ATXDataStore, _ATXAppLaunchHistogramManager, NSMutableSet, NSUserDefaults, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue, _CDLocalContext, ATXPredictionContextBuilderProtocol;

@interface ATXAppIntentMonitor : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXDuetHelper *_duetHelper;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchSequenceManager *_appActionLaunchSequenceManager;
    _ATXDataStore *_dataStore;
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
    NSObject<OS_dispatch_queue> *_appIntentHistoryQueue;
    id<_CDLocalContext> _context;
    NSMutableSet *_registrations;
    NSObject<OS_dispatch_queue> *_donationQueue;
    unsigned long long deletionHandlerToken;
    PETScalarEventTracker *_donatedActionsTracker;
    PETDistributionEventTracker *_donatedActionInCacheTracker;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _PASSimpleCoalescingTimer *_coalescedIntentOrActivityDeletion;
    NSUserDefaults *_userDefaults;
    ATXSafariIntentEventQualityFilter *_safariIntentQualityFilter;
}

- (void)_syncForTests;
- (id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)a0;
- (void)_respondToIntentStreamChangingWithContext:(id)a0;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)handleAppRegistrationForBundleIds:(id)a0;
- (BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)a0;
- (BOOL)shouldAcceptMessageDonation:(id)a0;
- (id)adjustedStartDateForTombstoneStreamQuery:(id)a0;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 dataStore:(id)a3;
- (void)handleDonationImmediatelyForBundleId:(id)a0 intentType:(id)a1 contextValue:(id)a2 isDonatedBySiri:(BOOL)a3 isWhitelistedDaemonDonationBundleId:(BOOL)a4;
- (void)handleIntentOrActivityDeletion;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 duetHelper:(id)a3 dataStore:(id)a4 predictionContextBuilder:(id)a5 userDefaults:(id)a6 safariIntentFilter:(id)a7;
- (BOOL)_isWhitelistedDaemonDonationBundleId:(id)a0;
- (id)adjustedEndDateForTombstoneStreamQuery:(id)a0;
- (void)_handleCompletedIntentForForUUID:(id)a0 atxIntentSource:(long long)a1;
- (void)dealloc;
- (void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)a0;
- (BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)a0;
- (void)stop;
- (void)_displayDonationOnLockscreenWithAction:(id)a0;
- (id)_appActionLaunchSequenceManager;
- (id)deletionHighWaterMarkForDefaultsKey:(id)a0 currentDate:(id)a1;
- (void)setDeletionHighWaterMark:(id)a0 defaultsKey:(id)a1;
- (void)removeDonationFromLockscreenForAction:(id)a0;
- (id)init;
- (id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)a0;
- (void)processNSUADonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (void)start;
- (BOOL)sessionStartedBeforeDonationForStartDate:(id)a0 latestDonationDate:(id)a1;
- (void)coalescedHandleIntentOrActivityDeletion;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)a0 weight:(float)a1 prevLocationUUID:(id)a2 locationUUID:(id)a3 currentMotionType:(long long)a4 appSessionStartDate:(id)a5 appSessionEndDate:(id)a6 geohash:(long long)a7 coarseGeohash:(long long)a8;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)a0 weight:(float)a1 context:(id)a2;
- (void)updateActionPredictionPipelineForAppSession:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3 context:(id)a4;
- (void)_listenToIntentStream;
- (void).cxx_destruct;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (void)_listenToActivityStream;
- (id)fetchNSUAEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_logIntentPredictionsForIntentEvent:(id)a0 context:(id)a1;

@end
