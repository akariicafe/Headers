@class NSMutableArray, NSMutableDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem

@property (readonly, nonatomic) NSMutableArray *updatedObjectIDs;
@property (readonly, nonatomic) NSMutableDictionary *failedObjectIDsToError;
@property (readonly, nonatomic) NSMutableDictionary *recordIDToObjectID;
@property (readonly, nonatomic) NSMutableDictionary *operationsToExecute;

- (void)dealloc;
- (id)fetchRecordsRequest;
- (id)batchRecordIDsIfNecessary:(id)a0;
- (void)fetchFinishedForRecord:(id)a0 withID:(id)a1 error:(id)a2;
- (void)fetchRecordsOperationWithID:(id)a0 finishedWithError:(id)a1 completion:(id /* block */)a2;
- (id)createMirroringResultForRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 error:(id)a3;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (id)description;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
