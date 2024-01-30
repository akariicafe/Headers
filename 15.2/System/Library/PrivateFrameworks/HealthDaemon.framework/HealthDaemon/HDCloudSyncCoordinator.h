@class NSDate, NSString, HDDaemon, HDXPCGatedActivity, HDPeriodicActivity, APSConnection, HDCloudSyncManagerTaskQueue, NSObject, NSProgress, NSMutableArray, HDProfile, ACAccountStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDCloudSyncCoordinator : NSObject <APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver> {
    HDDaemon *_daemon;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_cloudSyncEnabled;
    BOOL _lock_hasComputedCloudSyncEnabled;
    BOOL _lock_cloudSyncSupportEnabled;
    BOOL _lock_cloudSyncSupportValueLoaded;
    ACAccountStore *_lock_accountStore;
    BOOL _lock_syncInProgress;
    BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    HDCloudSyncManagerTaskQueue *_syncTaskQueue;
    NSProgress *_activeSyncProgress;
    NSMutableArray *_activeSyncCompletions;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSMutableArray *_progressCompletionBlocks;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_source> *_periodicActivityCriteriaUpdateSource;
    HDPeriodicActivity *_primaryPeriodicActivity;
    HDPeriodicActivity *_secondaryPeriodicActivity;
    HDPeriodicActivity *_userRequestedBackupActivity;
    HDXPCGatedActivity *_subscriptionBasedSyncActivity;
    BOOL _lock_requiresTinkerUpload;
    BOOL _lock_requiresTinkerDownload;
    double _lock_lastTinkerDataDownloadTriggerTime;
    double _lock_lastTinkerDataUploadTriggerTime;
    HDXPCGatedActivity *_sharedSummaryPullActivity;
    HDXPCGatedActivity *_sharedSummaryPushActivity;
    double _lock_nextAvailableOperationStartTime;
    HDProfile *_unitTest_primaryProfileOverride;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)a0;

- (id)initWithDaemon:(id)a0;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)daemonReady:(id)a0;
- (id)addCloudSyncProgressCompletion:(id /* block */)a0;
- (void)triggerSubscription:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticDescription;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)addManagerTask:(id)a0;
- (BOOL)_unitTest_shouldSyncProfile:(id)a0;
- (id)unitTest_periodicActivity;
- (id)syncAllProfilesWithContext:(id)a0 completion:(id /* block */)a1;
- (id)lastSuccessfulPushDate;
- (id)fetchCloudDescriptionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cloudSyncSupportStatusDidChange;
- (id)currentSyncProgress;
- (void)scheduleSharedSummaryPushWithMaximumDelay:(double)a0;
- (void)fetchSyncStatusWithCompletion:(id /* block */)a0;
- (void)delayNextCloudKitOperation:(double)a0;
- (void).cxx_destruct;
- (void)databaseJournalMergeDidCompleteForProfile:(id)a0;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (id)resetAllProfilesWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableSyncLocallyWithCompletion:(id /* block */)a0;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (BOOL)isDeviceInManateeUnavailableCFUState;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)a0;
- (void)resetSubscriptionSyncBackoff;
- (void)disableSyncLocallyWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)unitTest_setPrimaryProfileOverride:(id)a0;
- (void)unitTest_setPeriodicActivity:(id)a0;
- (long long)compareTask:(id)a0 withTask:(id)a1 queue:(id)a2;
- (double)nextCloudKitOperationDelay;
- (BOOL)canPerformCloudSyncWithError:(id *)a0;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)a0;
- (id)lastSuccessfulPullDate;

@end
