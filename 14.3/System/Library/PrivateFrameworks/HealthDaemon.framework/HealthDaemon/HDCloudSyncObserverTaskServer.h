@class NSString, NSObservation, HKCloudSyncObserverStatus, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HKCloudSyncObserverStatus *_status;
    NSObservation *_waitForSyncObservations;
    BOOL _observingSyncStatus;
    BOOL _hasRestoreCompleted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)remoteInterface;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)a0;
- (id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)_queue_verifyCloudSyncEnabledWithError:(id *)a0;
- (id)_readRestoreCompletionDateWithError:(id *)a0;
- (id)_readErrorRequiringUserActionOnCloudSyncError:(id *)a0;
- (void)_queue_startObservingSync;
- (void)_queue_didUpdateSyncStatusWithSyncEnabled:(BOOL)a0;
- (void)_queue_didUpdateSyncStatusWithErrorRequiringUserAction:(id)a0;
- (id)_queue_startSyncIfRestoreNotCompletedWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)_queue_didUpdateSyncStatus;
- (long long)_completeCloudSyncRestoreForJournalMergeResult:(long long)a0 error:(id)a1;
- (long long)_queue_checkCloudSyncEarlyExitConditionsWithError:(id *)a0;
- (void)_queue_syncDidStart;
- (long long)_queue_checkCloudSyncOngoingExitConditionsWithError:(id *)a0;
- (void)_queue_mergeCloudSyncJournalsWithTaskTree:(id)a0 progress:(id)a1;
- (BOOL)_persistRestoreCompletionDate:(id)a0;
- (void)_queue_mergeCloudSyncJournalsForProfile:(id)a0 progress:(id)a1 taskTree:(id)a2;
- (void)_queue_didUpdateSyncStatusWithLastPushDate:(id)a0;
- (void)_queue_didUpdateSyncStatusWithLastPullDate:(id)a0;
- (void)_queue_didUpdateSyncStatusWithLastPulledUpdateDate:(id)a0;
- (void)_queue_didUpdateSyncStatusWithRestoreCompleteDate:(id)a0;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(BOOL)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;

@end
