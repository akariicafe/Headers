@class NSArray, NSManagedObjectModel, NSPersistentStoreCoordinator, NSHashTable, MTManagedObjectContext, NSObject;
@protocol OS_dispatch_queue, MTCoreDataContainerConfigProvider;

@interface MTCoreDataContainer : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) MTManagedObjectContext *mainQueueContext;
@property (retain, nonatomic) MTManagedObjectContext *privateQueueContext;
@property (retain, nonatomic) MTManagedObjectContext *carPlayContext;
@property (retain, nonatomic) MTManagedObjectContext *storeContext;
@property (retain, nonatomic) MTManagedObjectContext *importContext;
@property (retain, nonatomic) MTManagedObjectContext *resetableImportContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeNotifierQueue;
@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (retain, nonatomic) NSHashTable *notifiers;
@property (retain, nonatomic) NSArray *entityNames;
@property (nonatomic) BOOL valid;

- (id)allContexts;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)destroy;
- (void)mergeFromContextDidSaveNotification:(id)a0;
- (id)mainOrPrivateContext;
- (id)_createManagedObjectContextWithName:(id)a0 coordinator:(id)a1 concurrencyType:(unsigned long long)a2;
- (void)_notifyLibraryChanged:(id)a0;
- (void)_addChanges:(id)a0 ofType:(int)a1 toLibraryChanges:(id)a2;
- (void)_tearDown:(BOOL)a0;
- (id)persistentStoreUuid;
- (id)contextForName:(id)a0;
- (void)addChangeNotifier:(id)a0;
- (void)removeChangeNotifier:(id)a0;
- (void)tearDownAsync:(BOOL)a0;

@end
