@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (void)finishExecutionIfPossible;

@end
