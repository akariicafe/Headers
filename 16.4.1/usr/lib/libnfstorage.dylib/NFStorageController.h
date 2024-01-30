@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface NFStorageController : NSObject <NFStorageInternalMethods>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (id)dbPath;
- (void).cxx_destruct;
- (id)homePath;

@end
