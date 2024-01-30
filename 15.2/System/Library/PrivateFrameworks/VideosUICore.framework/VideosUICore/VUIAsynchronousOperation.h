@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (BOOL)isExecuting;
- (void)finishExecutionIfPossible;

@end
