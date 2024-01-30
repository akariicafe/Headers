@interface WLKAsyncOperation : NSOperation {
    int _state;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (void)finishExecutionIfPossible;

@end
