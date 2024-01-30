@class NSString, NSDictionary, NSURL, ICExclusiveLock, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer

@property (class, readonly, nonatomic) ICExclusiveLock *databaseOpenLock;

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) BOOL abortAfterReplacingDatabase;

+ (id)standardStoreOptions;
+ (id)oldManagedObjectModel;
+ (BOOL)isDataProtectionError:(id)a0;
+ (id)managedObjectModel;
+ (BOOL)isDatabaseMissingError:(id)a0;

- (BOOL)isReadOnly;
- (BOOL)migrateFromOldDataModel;
- (void)setupPersistentStoreDescriptions;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (BOOL)allowsCoreDataMigration;
- (void)backupPersistentStore;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)loadPersistentStore:(id *)a0;
- (id)newBackgroundContext;
- (void)setupViewContext;
- (void).cxx_destruct;
- (BOOL)isTooLowOnDiskSpace;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (void)vacuumStore;

@end
