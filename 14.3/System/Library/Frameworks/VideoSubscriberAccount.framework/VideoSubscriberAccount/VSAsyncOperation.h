@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (void)cancel;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (void)finishExecutionIfPossible;

@end
