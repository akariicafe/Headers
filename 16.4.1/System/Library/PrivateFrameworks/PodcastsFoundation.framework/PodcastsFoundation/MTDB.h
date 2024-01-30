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
+ (void)setCorrupt:(BOOL)a0;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (BOOL)canExtensionOpenDatabase;
+ (void)isPodcastsAppCheck;
+ (void)setSharedInstance:(id)a0;
+ (id)libraryWalPath;
+ (id)libraryPath;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (void)setLibraryDataVersion:(long long)a0;
+ (long long)coreDataVersion;
+ (BOOL)createDatabaseIfNeeded;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)isCorrupt;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (BOOL)serpentIdMigrationComplete;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (long long)libraryDataVersion;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (id)libraryShmPath;
+ (id)fetchManagedObjectModelFromDisk;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
- (id)loggingContext;
- (id)contextForName:(id)a0;
- (id)playbackContext;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
- (id)importContext;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)a0;
- (id)resetableImportContext;
- (id)storeContext;

@end
