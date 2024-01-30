@interface NotesMigrationManager : NSObject

- (BOOL)migrateNotesStoreAtURL:(id)a0 storeType:(id)a1 managedObjectModel:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)areStoreMetadata:(id)a0 matchingEntityVersionsInModel:(id)a1;
- (BOOL)migrateNotesStoreAtURL:(id)a0 storeType:(id)a1 options:(id)a2 sourceModel:(id)a3 destinationModel:(id)a4 mappingModel:(id)a5 error:(id *)a6;

@end
