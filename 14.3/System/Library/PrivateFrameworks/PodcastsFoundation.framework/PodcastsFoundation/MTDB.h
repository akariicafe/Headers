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
+ (void)setSharedInstance:(id)a0;
+ (BOOL)isCorrupt;
+ (id)libraryPath;
+ (void)setCorrupt:(BOOL)a0;
+ (long long)coreDataVersion;
+ (long long)libraryDataVersion;
+ (id)fetchManagedObjectModelFromDisk;
+ (BOOL)canExtensionOpenDatabase;
+ (void)isPodcastsAppCheck;
+ (BOOL)createDatabaseIfNeeded;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
- (id)importContext;
- (id)mainQueueContext;
- (id)privateQueueContext;
- (id)mainOrPrivateContext;
- (id)carPlayContext;
- (id)storeContext;
- (id)resetableImportContext;
- (id)persistentStoreUuid;
- (void)addChangeNotifier:(id)a0;
- (void)removeChangeNotifier:(id)a0;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;

@end
