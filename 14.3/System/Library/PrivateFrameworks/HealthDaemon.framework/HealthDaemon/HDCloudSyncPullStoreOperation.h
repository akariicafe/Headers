@class HDCloudSyncTarget, CKServerChangeToken;

@interface HDCloudSyncPullStoreOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKServerChangeToken *_initialServerChangeToken;
}

@property (readonly, nonatomic) BOOL hasAppliedChange;
@property (readonly, nonatomic) HDCloudSyncTarget *target;

- (void).cxx_destruct;
- (void)main;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;
- (BOOL)_resetPullState:(id)a0 error:(id *)a1;
- (BOOL)_prepareForEpochChangeWithPersistedState:(id)a0 error:(id *)a1;
- (long long)_requiresSyncWithError:(id *)a0;
- (id)persistedStoreState;
- (void)_fetchChangeRecordsWithChangeToken:(id)a0;
- (BOOL)_isRelevantChangeRecord:(id)a0;
- (void)_updatePersistedServerChangeToken:(id)a0;
- (void)_fetchChangeRecordsOperationDidFinish:(id)a0 initialChangeToken:(id)a1;
- (long long)_requiresSyncForSequence:(id)a0 error:(id *)a1;
- (id)_orderedChangeRecordsBySequenceRecordIDWithFetchedChangeRecords:(id)a0;
- (id)_requiredRecordsWithOrderedChangeRecords:(id)a0 sequenceRecord:(id)a1 error:(id *)a2;
- (BOOL)_isValidAnchorRangeMap:(id)a0 lastAnchorMap:(id)a1 error:(id *)a2;
- (BOOL)_shouldApplyAnchorRangeMap:(id)a0 receivedAnchorMap:(id)a1;

@end
