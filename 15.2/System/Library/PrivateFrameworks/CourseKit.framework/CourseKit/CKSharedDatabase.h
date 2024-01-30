@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CKSharedDatabase : NSObject

@property (retain, nonatomic) NSManagedObjectContext *mainManagedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)databaseURL;

- (id)newManagedObjectContext;
- (void).cxx_destruct;
- (id)urlForDataModel;

@end
