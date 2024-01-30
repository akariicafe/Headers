@class _ATXAppInfoManager, ATXInternalAppRegistrationNotification, NSObject, _ATXDuetHelper, PETScalarEventTracker, PETDistributionEventTracker, _ATXAppLaunchSequenceManager, _ATXDataStore, _ATXAppLaunchHistogramManager, NSMutableSet, NSUserDefaults, CKContextClient, _PASSimpleCoalescingTimer;
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
    CKContextClient *_ckClient;
    NSUserDefaults *_userDefaults;
}

- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3;
- (BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)a0;
- (void)coalescedHandleIntentOrActivityDeletion;
- (void)_displayDonationOnLockscreenWithAction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 dataStore:(id)a3;
- (BOOL)_isWhitelistedDaemonDonationBundleId:(id)a0;
- (void)handleDonationImmediatelyForBundleId:(id)a0 intentType:(id)a1 contextValue:(id)a2 isDonatedBySiri:(BOOL)a3 isWhitelistedDaemonDonationBundleId:(BOOL)a4;
- (id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)a0;
- (void)_respondToIntentStreamChangingWithContext:(id)a0;
- (void)_handleCompletedIntentForForUUID:(id)a0 atxIntentSource:(long long)a1;
- (void)removeDonationFromLockscreenForAction:(id)a0;
- (void)setDeletionHighWaterMark:(id)a0 defaultsKey:(id)a1;
- (id)fetchNSUAEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)dealloc;
- (void)_logIntentPredictionsForIntentEvent:(id)a0 context:(id)a1;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)adjustedEndDateForTombstoneStreamQuery:(id)a0;
- (void)stop;
- (id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)a0;
- (id)_appActionLaunchSequenceManager;
- (id)adjustedStartDateForTombstoneStreamQuery:(id)a0;
- (BOOL)shouldAcceptSafariDonation:(id)a0;
- (void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)a0;
- (BOOL)shouldAcceptMessageDonation:(id)a0;
- (void)updateActionPredictionPipelineForAppSession:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 duetHelper:(id)a3 dataStore:(id)a4 predictionContextBuilder:(id)a5 userDefaults:(id)a6;
- (void)_listenToActivityStream;
- (id)deletionHighWaterMarkForDefaultsKey:(id)a0 currentDate:(id)a1;
- (BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)a0;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3 context:(id)a4;
- (BOOL)sessionStartedBeforeDonationForStartDate:(id)a0 latestDonationDate:(id)a1;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)a0 weight:(float)a1 prevLocationUUID:(id)a2 locationUUID:(id)a3 currentMotionType:(long long)a4 appSessionStartDate:(id)a5 appSessionEndDate:(id)a6 geohash:(long long)a7 coarseGeohash:(long long)a8;
- (void)start;
- (void)processNSUADonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)a0 weight:(float)a1 context:(id)a2;
- (void)_syncForTests;
- (void)_listenToIntentStream;
- (void)handleIntentOrActivityDeletion;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;

@end
