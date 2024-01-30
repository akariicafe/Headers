@class NSString, NSDictionary, NSURL, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) BOOL abortAfterReplacingDatabase;

+ (id)managedObjectModel;
+ (id)standardStoreOptions;
+ (id)oldManagedObjectModel;
+ (BOOL)isDataProtectionError:(id)a0;

- (BOOL)isReadOnly;
- (BOOL)migrateFromOldDataModel;
- (void).cxx_destruct;
- (id)newBackgroundContext;
- (void)setupPersistentStoreDescriptions;
- (void)backupPersistentStore;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)loadPersistentStore:(id *)a0;
- (void)vacuumStore;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (void)setupViewContext;
- (BOOL)isTooLowOnDiskSpace;

@end
