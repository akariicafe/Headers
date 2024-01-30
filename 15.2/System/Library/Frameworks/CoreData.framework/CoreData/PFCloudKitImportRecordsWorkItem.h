@class NSString, NSMutableDictionary, NSUUID, PFCloudKitFetchedAssetBytesMetric, NSMutableArray, PFCloudKitFetchedRecordBytesMetric;

@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSUUID *_importOperationIdentifier;
    NSMutableArray *_updatedRecords;
    unsigned long long _totalOperationBytes;
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_allRecordIDs;
    NSMutableArray *_encounteredErrors;
    NSMutableArray *_failedRelationships;
    NSMutableArray *_incrementalResults;
    NSMutableArray *_unknownItemRecordIDs;
    NSMutableDictionary *_updatedShares;
    unsigned long long _currentOperationBytes;
    unsigned long long _countUpdatedRecords;
    unsigned long long _countDeletedRecords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (void)cloudKitSerializer:(id)a0 failedToUpdateRelationship:(id)a1 withError:(id)a2;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)addUpdatedRecord:(id)a0;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (id)entityNameToRelationshipsToUpdate;
- (id)entityNameToAttributesToUpdate;
- (id)cloudKitSerializer:(id)a0 safeSaveURLForAsset:(id)a1;
- (void)dealloc;
- (id)createMirroringResultForRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 error:(id)a3;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
