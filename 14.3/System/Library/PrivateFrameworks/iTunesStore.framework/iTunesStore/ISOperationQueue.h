@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (id)operations;
- (void)addOperation:(id)a0;
- (long long)maxConcurrentOperationCount;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)setName:(id)a0;
- (void)cancelAllOperations;
- (long long)operationCount;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSuspended:(BOOL)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)name;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
