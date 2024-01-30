@interface WLKAsyncOperation : NSOperation {
    int _state;
}

+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)executionDidBegin;
- (void)start;
- (BOOL)isExecuting;
- (void)finishExecutionIfPossible;

@end
