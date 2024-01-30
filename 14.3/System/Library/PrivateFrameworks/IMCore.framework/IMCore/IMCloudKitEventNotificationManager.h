@class IMCloudKitSyncState, NSTimer, IMCloudKitSyncProgress, IMWeakReferenceCollection, IMEventNotificationManager;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject

@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property (retain) IMEventNotificationManager *notificationManager;
@property (weak) NSTimer *fetchStatsTimer;
@property (retain) IMCloudKitSyncState *previousState;
@property (retain) IMCloudKitSyncProgress *progressToSend;
@property (weak) id<IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider;
@property BOOL didPromptForCloudKitSync;
@property double progressPollingInterval;
@property (readonly) IMCloudKitSyncState *syncState;

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)a0;
+ (id)logHandle;
+ (id)__singleton__im;

- (id)init;
- (void)removeEventHandler:(id)a0;
- (void).cxx_destruct;
- (void)fetchRampStateWithCompletion:(id /* block */)a0;
- (void)fetchSyncStateWithCompletion:(id /* block */)a0;
- (void)setCloudKitSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)addEventHandler:(id)a0;
- (id)cloudKitHooks;
- (id)logHandle;
- (void)fetchSyncState;
- (void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)_syncStateDidChange:(id)a0;
- (BOOL)accountHasiMessageEnabled;
- (void)visitEventHandlers:(id /* block */)a0;
- (id)syncStateWithDictionary:(id)a0;
- (void)_sendSyncStateChangedEventToEventListeners:(id)a0;
- (void)_updateProgressWithState:(id)a0;
- (void)startInitialSync;
- (void)performAdditionalStorageRequiredCheck;
- (void)fetchSyncStateStatistics;
- (void)_sendSyncStatisticsToEventHandlers:(id)a0 error:(id)a1;
- (void)_fetchSyncStateStatistics:(id /* block */)a0;
- (void)_cancelStatsFetchingTimer;
- (void)_timerExpiredForSyncStatsFetching:(id)a0;
- (double)progressBroadcastDelay;
- (void)_sendProgressToEventListenersDeferred;
- (void)_sendProgressToEventListeners:(id)a0;
- (BOOL)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgressToEventListeners;
- (void)fetchSyncStateAfterFetchingAccountStatus;
- (void)fetchSyncStateAfterClearingErrors;
- (void)setCloudKitSyncEnabled:(BOOL)a0;
- (void)startPeriodicSync;
- (void)disableAllSyncEnabledCloudKitDevices;
- (void)fetchSyncStateStatisticsWithCompletion:(id /* block */)a0;
- (void)fetchSyncDebuggingInfo:(id)a0;

@end
