@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSArray, NSManagedObjectContext;

@interface NSPersistentContainer : NSObject {
    NSArray *_storeDescriptions;
}

@property (class, readonly) Class persistentStoreDescriptionClass;

@property (readonly, copy) NSString *name;
@property (readonly) NSManagedObjectContext *viewContext;
@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy) NSArray *persistentStoreDescriptions;

+ (id)persistentContainerWithPath:(id)a0;
+ (id)persistentContainerWithPath:(id)a0 managedObjectModel:(id)a1;
+ (id)persistentContainerWithName:(id)a0;
+ (id)persistentContainerWithPath:(id)a0 modelNamed:(id)a1;
+ (id)_newModelForName:(id)a0;
+ (id)persistentContainerWithName:(id)a0 managedObjectModel:(id)a1;
+ (id)persistentContainerUsingCachedModelWithPath:(id)a0;
+ (id)defaultDirectoryURL;

- (BOOL)load:(id *)a0;
- (id)init;
- (id)newBackgroundContext;
- (void)dealloc;
- (id)_createDefaultStoreDescriptions;
- (void)loadPersistentStoresWithCompletionHandler:(id /* block */)a0;
- (void)performBackgroundTask:(id /* block */)a0;
- (id)initWithName:(id)a0 managedObjectModel:(id)a1;
- (id)initWithName:(id)a0;
- (void)_loadStoreDescriptions:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
