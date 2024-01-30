@class HDCloudSyncChangeRecord, HDCloudSyncTarget, NSFileHandle, HDCloudSyncSequenceRecord;

@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation {
    NSFileHandle *_fileHandle;
}

@property (readonly, nonatomic) HDCloudSyncTarget *target;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
@property (readonly, nonatomic) HDCloudSyncChangeRecord *changeRecord;

+ (long long)progressCount;
+ (id)_assetFileHandleWithName:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)_fetchedRecord:(id)a0 recordID:(id)a1 inMemoryAsset:(BOOL)a2 error:(id)a3;
- (id)_zipArchiveExtractorForChangeRecord:(id)a0 assetContentInMemory:(BOOL)a1 error:(id *)a2;
- (void)_finishWithAssetExtractionError:(id)a0;
- (BOOL)_persistFetchedArchiveAsset:(id)a0 changeRecord:(id)a1 error:(id *)a2;
- (void)_setAssetExtractionFailureCount:(long long)a0;
- (void)_recordAppliedChange;
- (BOOL)_applySyncChanges:(id)a0 store:(id)a1 error:(id *)a2;
- (id)_assetExtractionFailureCountKey;
- (long long)_assetExtractionFailureCount;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequenceRecord:(id)a3 changeRecord:(id)a4;

@end
