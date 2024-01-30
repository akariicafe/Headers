@class NSMutableArray, NSMutableDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {
    NSMutableArray *_updatedObjectIDs;
    NSMutableDictionary *_failedObjectIDsToError;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_operationsToExecute;
}

- (id)initWithOptions:(id)a0 request:(id)a1;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)description;
- (id)createMirroringResultForRequest:(id)a0 storeIdentifier:(id)a1 success:(BOOL)a2 madeChanges:(BOOL)a3 error:(id)a4;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;

@end
