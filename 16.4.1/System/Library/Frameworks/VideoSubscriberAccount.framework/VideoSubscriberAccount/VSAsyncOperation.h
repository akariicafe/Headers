@interface VSAsyncOperation : NSOperation {
    int _state;
}

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishExecutionIfPossible;

@end
