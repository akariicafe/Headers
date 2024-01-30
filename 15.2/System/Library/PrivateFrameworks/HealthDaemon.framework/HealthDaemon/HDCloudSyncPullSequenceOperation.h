@class HDCloudSyncTarget, HDCloudSyncSequenceRecord, NSArray;

@interface HDCloudSyncPullSequenceOperation : HDCloudSyncOperation {
    NSArray *_changeRecords;
}

@property (readonly, nonatomic) HDCloudSyncTarget *target;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
@property (readonly, nonatomic) BOOL hasAppliedChange;

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3 changes:(id)a4;

@end
