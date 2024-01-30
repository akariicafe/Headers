@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)operations;
- (void)cancelAllOperations;
- (long long)maxConcurrentOperationCount;
- (void)dealloc;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)operationCount;
- (void)setSuspended:(BOOL)a0;
- (id)init;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)name;

@end
