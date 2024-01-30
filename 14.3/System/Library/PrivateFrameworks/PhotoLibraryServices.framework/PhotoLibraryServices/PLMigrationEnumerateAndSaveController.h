@class PLModelMigrator, NSString, NSFetchRequest, NSOperationQueue, NSError, PLPhotoLibraryBundle, NSManagedObjectContext;

@interface PLMigrationEnumerateAndSaveController : NSObject

@property (retain, nonatomic) NSString *operationName;
@property (retain, nonatomic) PLModelMigrator *migrator;
@property (retain, nonatomic) NSManagedObjectContext *originalContext;
@property (retain, nonatomic) PLPhotoLibraryBundle *migrationBundle;
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ processResultsBlock;
@property (nonatomic) BOOL succeeded;
@property (retain, nonatomic) NSError *firstError;

- (BOOL)processObjectsWithError:(id *)a0;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 modelMigrator:(id)a3 concurrent:(BOOL)a4 processResultBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (void)_runOperationWithObjectIDs:(id)a0;

@end
