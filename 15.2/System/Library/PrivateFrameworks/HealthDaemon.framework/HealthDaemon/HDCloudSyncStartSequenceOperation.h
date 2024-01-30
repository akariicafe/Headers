@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    _Atomic BOOL _shouldClearRebaselineDeadline;
}

@property BOOL shouldClearRebaselineDeadline;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3 replacingSequence:(id)a4;

@end
