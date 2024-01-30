@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    _Atomic BOOL _shouldClearRebaselineDeadline;
}

@property BOOL shouldClearRebaselineDeadline;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3 replacingSequence:(id)a4;
- (void)_deleteReplacedSequence;
- (void)_pushNewSequence;
- (BOOL)_updateDisplayNameForRegistryRecord:(id)a0 error:(id *)a1;

@end
