@class NSString, NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext;

@interface SLDatabase : NSObject {
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (BOOL)save:(id *)a0;
- (void).cxx_destruct;
- (id)initWithStoreName:(id)a0 modelPath:(id)a1;
- (void)_setUpManagedObjectContext;
- (void)_removeFilesAtURL:(id)a0 forStoreCoordinator:(id)a1;
- (id)newObjectForEntityNamed:(id)a0;

@end
