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

- (void)rollback;
- (id)_managedObjectModel;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)a0;
- (id)insertNewObjectForEntityForName:(id)a0;
- (void)_handleManagedObjectContextError:(id)a0;
- (id)_persistentStore;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2 prefetchKeypaths:(id)a3;
- (id)existingObjectWithURI:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (BOOL)saveWithError:(id *)a0 rollbackOnFailure:(BOOL)a1;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)setAccountPropertyWithKey:(id)a0 value:(id)a1 owner:(id)a2;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)a0;
- (id)_accountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)fetchObjectsForEntityNamed:(id)a0;
- (void)deleteAccountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)_managedObjectContextModificationDescription;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2;
- (id)_managedObjectModificationDescription:(id)a0;
- (void)dealloc;
- (id)managedObjectIDForURI:(id)a0;
- (void)deleteObject:(id)a0;
- (void)_managedObjectContextDidSave:(id)a0;
- (unsigned long long)countOfEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)objectForObjectURI:(id)a0;
- (void)_traceDatabaseEvents;

@end
