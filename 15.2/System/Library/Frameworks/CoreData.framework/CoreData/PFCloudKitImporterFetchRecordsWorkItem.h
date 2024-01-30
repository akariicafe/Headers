@class NSMutableArray, NSMutableDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {
    NSMutableArray *_updatedObjectIDs;
    NSMutableDictionary *_failedObjectIDsToError;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_operationsToExecute;
}

- (id)description;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (id)entityNameToRelationshipsToUpdate;
- (id)entityNameToAttributesToUpdate;
- (void)dealloc;
- (id)createMirroringResultForRequest:(id)a0 success:(BOOL)a1 madeChanges:(BOOL)a2 error:(id)a3;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
