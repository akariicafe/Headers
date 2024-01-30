@class NSArray, NSAsynchronousFetchRequest;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult

@property (retain) NSArray *finalResult;
@property (copy) id intermediateResultCallback;
@property (readonly) NSAsynchronousFetchRequest *fetchRequest;

- (void)setOperationError:(id)a0;
- (void)dealloc;
- (id)initForFetchRequest:(id)a0 withContext:(id)a1 andProgress:(id)a2 completetionBlock:(id /* block */)a3;

@end
