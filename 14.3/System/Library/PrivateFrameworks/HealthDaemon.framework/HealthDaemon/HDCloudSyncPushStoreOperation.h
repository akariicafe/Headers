@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}

@property (copy) HDCloudSyncTarget *target;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;
- (id)_validatedSequenceRecordOperationsForPush;
- (void)_sequencePushesDidFinishSuccessfully;
- (id)_currentOwnedStoreIdentifiersForPush;
- (id)_operationForNewSequenceRecord:(id)a0 replacingSequence:(id)a1 isRebaseline:(BOOL)a2;
- (id)_operationForExistingSequenceRecord:(id)a0;
- (id)_pendingSequenceRecordOperationForPushWithIncludedStoreIdentifiers:(id)a0;
- (id)_replacePendingSequenceRecordWithIncludedStoreIdentifiers:(id)a0;

@end
