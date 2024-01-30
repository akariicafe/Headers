@class NSManagedObjectModel, TBPersistenceRemoteStoreServer, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface TBPersistenceManager : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *persistenceContext;
@property (retain, nonatomic) TBPersistenceRemoteStoreServer *remoteStoreServer;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator;

+ (BOOL)isStoreCompatibleAtURL:(id)a0 withModel:(id)a1;

- (id)initWithManagedObjectModel:(id)a0 storeDescriptor:(id)a1;
- (void).cxx_destruct;
- (void)addPersistentStorage:(id)a0 completionHandler:(id /* block */)a1;

@end
