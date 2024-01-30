@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (id)performAction;
- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isConcurrent;

@end
