@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isCorrupt;
+ (id)libraryPath;
+ (void)setCorrupt:(BOOL)a0;
+ (void)setSharedInstance:(id)a0;
+ (long long)coreDataVersion;
+ (long long)libraryDataVersion;
+ (id)fetchManagedObjectModelFromDisk;
+ (BOOL)canExtensionOpenDatabase;
+ (void)isPodcastsAppCheck;
+ (BOOL)serpentIdMigrationComplete;
+ (BOOL)createDatabaseIfNeeded;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (id)mainQueueContext;
- (id)managedObjectModel;
- (id)privateQueueContext;
- (id)mainOrPrivateContext;
- (id)carPlayContext;
- (id)storeContext;
- (id)importContext;
- (id)resetableImportContext;
- (id)persistentStoreUuid;
- (id)contextForName:(id)a0;
- (void)addChangeNotifier:(id)a0;
- (void)removeChangeNotifier:(id)a0;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;

@end
