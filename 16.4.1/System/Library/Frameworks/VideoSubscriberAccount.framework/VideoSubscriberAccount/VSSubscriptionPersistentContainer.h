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

- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)_setupPersistenceIfNeeded:(id *)a0;
- (void)performBlock:(id /* block */)a0;
- (id)init;
- (void)_removePersistentStore;
- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)a0 andWait:(BOOL)a1;

@end
