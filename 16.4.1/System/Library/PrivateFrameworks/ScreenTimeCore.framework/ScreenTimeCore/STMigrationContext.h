@class NSMutableDictionary, NSMutableSet;

@interface STMigrationContext : NSObject {
    NSMutableDictionary *_uniqueIdentifierToCloudObjectID;
    NSMutableDictionary *_uniqueIdentifierToLocalObjectID;
    NSMutableSet *_deletedObjectIDs;
    NSMutableSet *_filledObjectIDs;
}

- (id)init;
- (void).cxx_destruct;
- (id)deleteCloudObjectWithUniqueIdentifier:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)deleteLocalObjectWithUniqueIdentifier:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)initializeCachesWithManagedObjectContext:(id)a0 withCloudStore:(id)a1 andLocalStore:(id)a2 error:(id *)a3;
- (id)updateCloudObjectWithUniqueIdentifier:(id)a0 dictionary:(id)a1 managedObjectContext:(id)a2 error:(id *)a3;

@end
