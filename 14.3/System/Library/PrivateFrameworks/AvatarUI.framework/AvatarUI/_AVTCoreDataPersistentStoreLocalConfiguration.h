@class NSString, NSPersistentStoreCoordinator, NSURL, AVTCoreEnvironment, NSPersistentStoreDescription;
@protocol AVTUILogger;

@interface _AVTCoreDataPersistentStoreLocalConfiguration : NSObject <AVTCoreDataPersistentStoreLocalConfiguration>

@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSURL *folderLocation;
@property (readonly, nonatomic) NSURL *databaseLocation;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sideDatabaseFolderForStoreLocation:(id)a0;
+ (id)databaseFolderForStoreLocation:(id)a0;
+ (id)databaseLocationForFolderLocation:(id)a0;
+ (id)createStoreDescriptionWithDatabaseLocation:(id)a0 logger:(id)a1;

- (id)createStoreServerWithError:(id *)a0;
- (void)updateBackupInclusionStatusOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)migratableSources;
- (id)persistentStoreCoordinator;
- (BOOL)tearDownAndEraseAllContent:(id *)a0;
- (BOOL)copyStorageAside:(id *)a0;
- (id)copiedAsideMigratableSource;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (BOOL)contentExists;
- (BOOL)setupIfNeeded:(id *)a0;
- (id)initWithStoreLocation:(id)a0 copiedAside:(BOOL)a1 environment:(id)a2;
- (BOOL)createDatabaseDirectoryIfNeeded:(id *)a0 usingFileManager:(id)a1;

@end
