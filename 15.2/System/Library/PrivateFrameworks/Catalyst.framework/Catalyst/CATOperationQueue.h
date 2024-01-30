@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue

@property (weak, nonatomic) id<CATOperationQueueDelegate> delegate;

+ (id)mainQueue;
+ (id)backgroundQueue;
+ (id)currentQueue;

- (void)delegateWillAddOperation:(id)a0;
- (void)stopObserving:(id)a0;
- (void)startObserving:(id)a0;
- (void)setUnderlyingQueue:(id)a0;
- (id)description;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)delegateOperationDidFinish:(id)a0;
- (void)addOperation:(id)a0;

@end
