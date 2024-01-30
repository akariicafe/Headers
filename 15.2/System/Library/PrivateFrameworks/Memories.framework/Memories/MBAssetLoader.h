@class NSRecursiveLock, NSArray, NSOperationQueue, NSMutableArray;

@interface MBAssetLoader : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSRecursiveLock *queuedOperationsLock;
@property (retain, nonatomic) NSMutableArray *queuedOperations;
@property unsigned long long maxConcurrentOperationCount;
@property (retain, nonatomic) NSArray *prefetchKeys;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)init;
- (void)loadAssetsFromURLs:(id)a0 withResultHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)suspendOperationQueue:(id)a0;
- (void)resumeOperationQueue:(id)a0;
- (void)_loadAssetsFromURLs:(id)a0 withResultHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
