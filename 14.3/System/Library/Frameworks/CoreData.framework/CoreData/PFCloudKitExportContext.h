@class NSMutableArray, PFCloudKitExporterOptions;

@interface PFCloudKitExportContext : NSObject {
    PFCloudKitExporterOptions *_options;
}

@property (readonly, nonatomic) NSMutableArray *writtenAssetURLs;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (readonly, nonatomic) unsigned long long totalRecords;
@property (readonly, nonatomic) unsigned long long totalRecordIDs;

- (id)initWithOptions:(id)a0;
- (BOOL)modifyRecordsOperationFinishedForStore:(id)a0 withSavedRecords:(id)a1 deletedRecordIDs:(id)a2 operationError:(id)a3 managedObjectContext:(id)a4 error:(id *)a5;
- (BOOL)insertRecordMetadataForObjectIDsInBatch:(id)a0 inManagedObjectContext:(id)a1 withPendingTransactionNumber:(id)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)processAnalyzedHistoryInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)checkForObjectsNeedingExportInStore:(id)a0 andReturnCount:(unsigned long long *)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
- (id)newOperationBySerializingDirtyObjectsInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)currentBatchExceedsThresholds:(id)a0;

@end
