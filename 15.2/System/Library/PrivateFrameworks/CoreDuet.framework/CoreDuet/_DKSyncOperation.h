@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isFinished;
- (void)start;
- (BOOL)isExecuting;
- (id)init;
- (void)dealloc;
- (void)startOperation;
- (void)endOperation;

@end
