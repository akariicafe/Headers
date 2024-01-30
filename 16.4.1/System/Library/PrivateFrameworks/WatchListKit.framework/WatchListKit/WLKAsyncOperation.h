@interface WLKAsyncOperation : NSOperation {
    int _state;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)executionDidBegin;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishExecutionIfPossible;

@end
