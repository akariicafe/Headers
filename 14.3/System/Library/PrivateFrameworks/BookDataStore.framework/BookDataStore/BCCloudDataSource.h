@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) BOOL setupPersistentStore;

+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;
+ (id)_persistentStoreDirectory;

- (void).cxx_destruct;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)initWithManagedObjectModel:(id)a0 persistentStorePath:(id)a1;
- (void)_setupPersistentStoreCoordinatorWithPath:(id)a0;
- (void)_setupManagedObjectContextWithCoordinator:(id)a0;
- (id)_persistentStoreOptions;
- (void)_createPersistentStoreDirectory;
- (void)_logIfError:(id)a0 operation:(id)a1;

@end
