@class HDCloudSyncChangeRecord, HDCloudSyncTarget, NSFileHandle, HDCloudSyncSequenceRecord;

@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation {
    NSFileHandle *_fileHandle;
}

@property (readonly, nonatomic) HDCloudSyncTarget *target;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
@property (readonly, nonatomic) HDCloudSyncChangeRecord *changeRecord;

+ (long long)progressCount;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequenceRecord:(id)a3 changeRecord:(id)a4;

@end
