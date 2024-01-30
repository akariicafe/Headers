@class HDCloudSyncTarget;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) BOOL shouldValidateCurrentSequence;
@property (copy, nonatomic) HDCloudSyncTarget *target;
@property (readonly, nonatomic) long long result;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)_validateSequenceOrdering;
- (id)analyticsDictionary;
- (void)_validateCurrentSequence;
- (BOOL)_validateAnchorRangesForSequenceRecord:(id)a0;
- (void)_requireRebaseForTarget;
- (BOOL)_validateCurrentSequenceChildCount;
- (BOOL)_validateAnchorRanges;
- (BOOL)_validatePersistedStoreState;
- (void)_validateCurrentSequenceChanges;
- (BOOL)_orderedChangeRecordSequenceRequiresRebase:(id)a0;
- (BOOL)_isRelevantChangeRecord:(id)a0 forStoreRecord:(id)a1;

@end
