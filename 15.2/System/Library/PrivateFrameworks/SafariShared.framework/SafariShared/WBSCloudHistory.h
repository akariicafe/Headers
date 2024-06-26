@class NSData, NSString, WBSCloudHistoryPushAgentProxy, WBSCloudKitThrottler, NSMutableDictionary, NSObject, WBSCloudHistoryConfiguration, WBSOneShotTimer, NSMutableArray;
@protocol WBSCloudHistoryDataStore, WBSHistoryServiceDatabaseProtocol, WBSCloudKitContainerManateeObserving, OS_dispatch_queue;

@interface WBSCloudHistory : NSObject <WBSCloudHistoryServiceProtocol, WBSCloudKitThrottlerDataStore> {
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    id<WBSHistoryServiceDatabaseProtocol> _database;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    NSData *_longLivedSaveOperationData;
    unsigned long long _syncCircleSize;
    BOOL _cloudHistoryEnabled;
    BOOL _saveChangesWhenHistoryLoads;
    BOOL _fetchChangesWhenHistoryLoads;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _fetchOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _replayLongLivedSaveOperationSuddenTerminationDisabler;
    BOOL _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id<WBSCloudHistoryDataStore> _store;
    WBSCloudKitThrottler *_saveChangesThrottler;
    WBSCloudKitThrottler *_fetchChangesThrottler;
    WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
    WBSOneShotTimer *_serverBackoffTimer;
    BOOL _saveChangesWhenBackoffTimerFires;
    BOOL _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    WBSOneShotTimer *_pushNotificationFetchTimer;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
    id /* block */ _fetchCompletionHandler;
    id /* block */ _saveCompletionHandler;
    id<WBSCloudKitContainerManateeObserving> _containerManateeObserver;
    NSMutableArray *_storeDeterminationCompletionBlocks;
    long long _currentManateeState;
    BOOL _manateeStateNeedsUpdate;
    BOOL _isWaitingForPCSIdentityUpdate;
    BOOL _determiningStoreType;
}

@property (nonatomic) unsigned long long numberOfDevicesInSyncCircle;
@property (nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
@property (nonatomic) BOOL removedHistoryItemsArePendingSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_manateeErrorCode:(id)a0;
- (id)initWithDatabase:(id)a0 configuration:(id)a1 completionBlock:(id /* block */)a2;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_setPushNotificationAreInitialized:(BOOL)a0;
- (void)_saveVisits:(id)a0 tombstones:(id)a1 toCloudHistoryBypassingThrottler:(BOOL)a2 longLivedOperationPersistenceCompletion:(id /* block */)a3 withCallback:(id /* block */)a4;
- (void)_backOffWithInterval:(double)a0;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)a0;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(id /* block */)a0;
- (id)_currentFetchChangesThrottlerPolicyString;
- (void)_pushNotificationReceived:(id)a0;
- (void)_serverBackoffTimerFired:(id)a0;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(id /* block */)a0;
- (void)_fetchChangesInResponseToPushNotification:(id)a0;
- (void)_transitionCloudHistoryStoreToManateeState:(long long)a0 completion:(id /* block */)a1;
- (void)_handleManateeErrorIfNeeded:(id)a0;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (void)fetchAndMergeChanges;
- (void)_fetchChangesWhenHistoryLoads;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_deleteAllCloudHistoryAndSaveAgain;
- (void)_persistedLongLivedSaveOperationID:(id *)a0 databaseGeneration:(long long *)a1;
- (double)_backoffTimeIntervalFromError:(id)a0;
- (void)resetForAccountChange;
- (long long)_resultFromError:(id)a0;
- (void)_resetCloudHistoryDataWithCompletionHandler:(id /* block */)a0;
- (void)_updateThrottlerPolicies;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 configuration:(id)a1;
- (void)fetchAndMergeChangesBypassingThrottler;
- (id)_currentSaveChangesThrottlerPolicyString;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)a0 completion:(id /* block */)a1;
- (void)_pcsIdentitiesChangedNotification:(id)a0;
- (void)_updateDeviceCountInResponseToPushNotification;
- (void)saveChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetForAccountChangeWithCompletionHandler:(id /* block */)a0;
- (long long)_priorityForSaveWithVisits:(id)a0 tombstones:(id)a1 bypassingThrottler:(BOOL)a2;
- (void)_setServerChangeToken:(id)a0;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)saveChangesToCloudHistoryStore;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)a0 databaseGeneration:(long long)a1;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getServerChangeTokenDataWithCompletion:(id /* block */)a0;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)a0;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)a0;
- (void)_registerFetchCompletionHandler:(id /* block */)a0;
- (void)_processPendingPushNotifications;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cloudHistoryConfigurationChanged:(id)a0;
- (void)dealloc;
- (void)_resetForAccountChangeWithCompletionHandler:(id /* block */)a0;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)a0 withPriority:(long long)a1;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)a0;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)a0 completion:(id /* block */)a1;
- (void)_saveChangesWhenHistoryLoads;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_initializePushNotificationSupport;
- (void)_determineCloudHistoryStoreWithCompletion:(id /* block */)a0;
- (id).cxx_construct;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)a0;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_registerSaveCompletionHandler:(id /* block */)a0;
- (id)recordOfPastOperationsForThrottler:(id)a0;
- (void)setRecordOfPastOperations:(id)a0 forThrottler:(id)a1;

@end
