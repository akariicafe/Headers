@class NSUUID, NSMutableDictionary, NSString, PFCloudKitFetchedAssetBytesMetric, NSMutableArray, PFCloudKitFetchedRecordBytesMetric;

@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableArray *_failedRelationships;
}

@property (readonly, nonatomic) NSUUID *importOperationIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *assetPathToSafeSaveURL;
@property (readonly, nonatomic) NSMutableArray *encounteredErrors;
@property (readonly, nonatomic) NSMutableArray *updatedRecords;
@property (readonly, nonatomic) NSMutableDictionary *recordTypeToDeletedRecordID;
@property (readonly, nonatomic) NSMutableArray *allRecordIDs;
@property (readonly, nonatomic) unsigned long long currentOperationBytes;
@property (readonly, nonatomic) unsigned long long totalOperationBytes;
@property (readonly, nonatomic) unsigned long long totalRecordBytes;
@property (readonly, nonatomic) NSMutableArray *incrementalResults;
@property (readonly, nonatomic) NSMutableArray *unknownItemRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)addEncounteredError:(id)a0;
- (id)createMirroringResultForRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 error:(id)a3;
- (void)checkAndApplyChangesIfNeeded:(id)a0;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)cloudKitSerializer:(id)a0 failedToUpdateRelationship:(id)a1 withError:(id)a2;
- (id)cloudKitSerializer:(id)a0 safeSaveURLForAsset:(id)a1;
- (void)addDeletedRecordID:(id)a0 ofType:(id)a1;
- (BOOL)checkForActiveImportOperationInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void)removeDownloadedAssetFiles;
- (BOOL)handleImportError:(id)a0;
- (id)newMirroringResultByApplyingAccumulatedChanges;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (void)addUpdatedRecord:(id)a0;
- (void)fetchOperationFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
