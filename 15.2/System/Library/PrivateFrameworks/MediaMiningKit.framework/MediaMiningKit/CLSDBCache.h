@class NSString, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface CLSDBCache : NSObject

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, copy, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) BOOL supportsVersioning;

+ (void)initialize;
+ (id)defaultCacheName;
+ (id)currentApplicationDataUrlQueue;
+ (id)defaultCache;
+ (id)applicationDataUrlQueueWithURL:(id)a0;
+ (BOOL)locationIsValidForDatabaseAtURL:(id)a0;
+ (id)urlForGraphApplicationData;
+ (id)diskCacheWithName:(id)a0;

- (BOOL)_save;
- (BOOL)save;
- (id)formatVersion;
- (id)initAtURL:(id)a0;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (id)initWithDiskCacheName:(id)a0;
- (void)invalidateDiskCaches;
- (void)_resetCoreDataStack;
- (id)initWithDiskCacheName:(id)a0 dataModelName:(id)a1;
- (void)_saveAsync;

@end
