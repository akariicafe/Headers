@class NSCache, NSPersistentStoreCoordinator, NSNumber, NSManagedObjectContext;
@protocol NSObject, ACDDatabaseConnectionDelegate;

@interface ACDDatabaseConnection : NSObject {
    id<NSObject> _managedObjectContextDidSaveObserver;
    NSCache *_cache;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id<ACDDatabaseConnectionDelegate> delegate;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *keychainVersion;

+ (id)new;

- (void)deleteObject:(id)a0;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)rollback;
- (id)init;
- (void).cxx_destruct;
- (id)objectForObjectURI:(id)a0;
- (unsigned long long)countOfEntityNamed:(id)a0 withPredicate:(id)a1;
- (void)dealloc;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (id)insertNewObjectForEntityForName:(id)a0;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)a0;
- (void)deleteAccountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2 prefetchKeypaths:(id)a3;
- (BOOL)saveWithError:(id *)a0;
- (id)fetchObjectsForEntityNamed:(id)a0;
- (id)_managedObjectContextModificationDescription;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2;
- (void)setAccountPropertyWithKey:(id)a0 value:(id)a1 owner:(id)a2;
- (id)_managedObjectModificationDescription:(id)a0;
- (void)_handleManagedObjectContextError:(id)a0;
- (id)_managedObjectModel;
- (void)_managedObjectContextDidSave:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)existingObjectWithURI:(id)a0;
- (id)_persistentStore;
- (id)_accountPropertyWithKey:(id)a0 owner:(id)a1;
- (BOOL)saveWithError:(id *)a0 rollbackOnFailure:(BOOL)a1;
- (void)_traceDatabaseEvents;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)a0;
- (id)managedObjectIDForURI:(id)a0;

@end
