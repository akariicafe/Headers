@class VSOptional, NSString, NSPersistentStoreCoordinator, NSOperationQueue, NSURL;

@interface VSSubscriptionPersistentContainer : NSObject

@property (retain, nonatomic) NSOperationQueue *migrationQueue;
@property (nonatomic) BOOL didSetupPersistence;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) VSOptional *viewContext;
@property (nonatomic) BOOL skipMigration;
@property (copy, nonatomic) NSString *persistentStoreType;
@property (copy, nonatomic) NSURL *persistentStoreURL;
@property (copy, nonatomic) NSURL *subscriptionsPropertyListURL;

- (BOOL)_setupPersistenceIfNeeded:(id *)a0;
- (void)_removePersistentStore;
- (void)performBlock:(id /* block */)a0;
- (void)_performBlock:(id /* block */)a0 andWait:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)performBlockAndWait:(id /* block */)a0;

@end
