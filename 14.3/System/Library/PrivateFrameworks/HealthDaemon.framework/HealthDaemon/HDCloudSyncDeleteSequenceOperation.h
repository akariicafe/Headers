@class HDCloudSyncTarget, HDCloudSyncSequenceRecord;

@interface HDCloudSyncDeleteSequenceOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3;

@end
