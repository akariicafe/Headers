@class NSFetchRequest, NSString, NSError, NSOperationQueue, PLPhotoLibraryPathManager, PLPhotoLibraryBundle, NSManagedObjectContext;

@interface PLEnumerateAndSaveController : NSObject {
    _Atomic BOOL _cancelled;
}

@property (nonatomic) BOOL concurrent;
@property (retain, nonatomic) NSString *operationName;
@property (retain, nonatomic) NSManagedObjectContext *originalContext;
@property (retain, nonatomic) PLPhotoLibraryBundle *libraryBundle;
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (copy, nonatomic) id /* block */ processResultsBlock;
@property (copy, nonatomic) id /* block */ generateContextBlock;
@property (nonatomic) BOOL succeeded;
@property (retain, nonatomic) NSError *firstError;

- (void)_inq_runOperationWithObjectIDs:(id)a0 onContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 pathManager:(id)a3 concurrent:(BOOL)a4 generateContextBlock:(id /* block */)a5 processResultBlock:(id /* block */)a6;
- (BOOL)processObjectsWithError:(id *)a0;

@end
