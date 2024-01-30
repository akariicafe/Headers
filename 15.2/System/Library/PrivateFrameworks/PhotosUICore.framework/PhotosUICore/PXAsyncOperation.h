@interface PXAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _operationState;
}

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)px_start;
- (void)start;
- (BOOL)isExecuting;
- (id)init;
- (void)cancel;
- (void)px_finishIfPossible;

@end
