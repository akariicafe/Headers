@class NSAsynchronousFetchRequest, NSArray;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {
    NSArray *_finalResult;
    id _intermediateResultCallback;
}

@property (readonly) NSAsynchronousFetchRequest *fetchRequest;
@property (readonly) NSArray *finalResult;

- (void)setOperationError:(id)a0;
- (void)dealloc;
- (id)initForFetchRequest:(id)a0 withContext:(id)a1 andProgress:(id)a2 completetionBlock:(id /* block */)a3;

@end
