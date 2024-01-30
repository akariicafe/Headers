@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (long long)maxConcurrentOperationCount;
- (void)setName:(id)a0;
- (void)setSuspended:(BOOL)a0;
- (long long)operationCount;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)operations;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAllOperations;
- (id)name;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)addOperation:(id)a0;

@end
