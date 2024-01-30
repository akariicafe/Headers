@class RTPersistenceStore, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSPersistentStore;

@interface RTPersistenceStoreImporter : NSObject {
    NSPersistentStore *_affectedStore;
}

@property (retain, nonatomic) RTPersistenceStore *sourceStore;
@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) RTPersistenceStore *destinationStore;
@property (retain, nonatomic) NSPersistentStoreCoordinator *destinationCoordinator;
@property (retain, nonatomic) NSManagedObjectModel *model;
@property (copy, nonatomic) NSString *configuration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)import:(id *)a0;
- (id)entityDescriptions;
- (BOOL)enumerateRelationshipsInEntityDescription:(id)a0 sourceObject:(id)a1 error:(id *)a2;
- (BOOL)establishEntityRelationships:(id *)a0;
- (id)fetchDestinationObjectWithEntityDescription:(id)a0 predicate:(id)a1 context:(id)a2 error:(id *)a3;
- (BOOL)importEntityRowsAndAttributes:(id *)a0;
- (id)initWithManagedObjectModel:(id)a0 configuration:(id)a1 sourceStore:(id)a2 sourceCoordinator:(id)a3 destinationStore:(id)a4 destinationCoordinator:(id)a5;
- (id)managedObjectContextTargetingType:(long long)a0;
- (BOOL)updateRelationshipWithEntity:(id)a0 relationshipDescription:(id)a1 relationshipIdentifiers:(id)a2 context:(id)a3 error:(id *)a4;

@end
