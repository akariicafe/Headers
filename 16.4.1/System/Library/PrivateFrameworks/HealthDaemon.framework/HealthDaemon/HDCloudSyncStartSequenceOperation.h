@class HDCloudSyncTarget, HDCloudSyncSequenceRecord, HDCloudSyncSequenceState;

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncSynchronousOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    BOOL _shouldClearRebaselineDeadline;
}

@property (readonly, copy, nonatomic) HDCloudSyncSequenceState *sequenceState;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3 replacingSequence:(id)a4 shouldClearRebaselineDeadline:(BOOL)a5;
- (BOOL)performWithError:(id *)a0;

@end
