@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (void)finish;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (id)performAction;

@end
