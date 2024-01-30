@class NSString, NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext;

@interface SLDatabase : NSObject {
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (BOOL)save:(id *)a0;
- (id)_persistentStoreCoordinator;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)_managedObjectModel;
- (void).cxx_destruct;
- (void)_removeFilesAtURL:(id)a0 forStoreCoordinator:(id)a1;
- (void)_setUpManagedObjectContext;
- (id)initWithStoreName:(id)a0 modelPath:(id)a1;
- (id)newObjectForEntityNamed:(id)a0;

@end
