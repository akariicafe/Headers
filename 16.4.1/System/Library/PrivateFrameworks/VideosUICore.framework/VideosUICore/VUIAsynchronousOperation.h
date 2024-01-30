@interface VUIAsynchronousOperation : NSOperation {
    int _state;
}

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishExecutionIfPossible;

@end
