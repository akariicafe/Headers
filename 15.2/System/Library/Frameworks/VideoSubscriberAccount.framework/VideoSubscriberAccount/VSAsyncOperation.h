@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (BOOL)isExecuting;
- (void)cancel;
- (void)finishExecutionIfPossible;

@end
