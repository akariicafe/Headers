@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CKSharedDatabase : NSObject

@property (retain, nonatomic) NSManagedObjectContext *mainManagedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)databaseURL;

- (void).cxx_destruct;
- (id)newManagedObjectContext;
- (id)urlForDataModel;

@end
