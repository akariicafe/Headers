@class NSLock;

@interface PXAsyncOperation : NSOperation {
    NSLock *_stateLock;
    int _operationState;
}

- (void)px_start;
- (id)init;
- (void).cxx_destruct;
- (void)px_finishIfPossible;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
