@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {
    int _flags;
}

@property (retain) NSProgress *progress;
@property (retain) NSError *operationError;
@property (copy) id requestCompletionBlock;
@property (readonly) NSManagedObjectContext *managedObjectContext;

- (void)cancel;
- (void)dealloc;
- (BOOL)_isCancelled;
- (id)initWithContext:(id)a0 andProgress:(id)a1 completetionBlock:(id)a2;
- (void)_cancelProgress;

@end
