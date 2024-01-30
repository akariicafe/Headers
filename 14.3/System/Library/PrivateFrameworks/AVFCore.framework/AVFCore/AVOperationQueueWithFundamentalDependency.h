@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {
    NSOperation *_fundamentalOperation;
}

- (void)addOperation:(id)a0;
- (void)dealloc;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)initWithFundamentalOperation:(id)a0;

@end
