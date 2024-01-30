@interface PXImportConcurrentAction : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)performAction;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (void)start;

@end
