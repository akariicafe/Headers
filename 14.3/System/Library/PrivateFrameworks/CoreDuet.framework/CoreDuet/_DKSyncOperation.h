@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (id)init;
- (void)dealloc;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)endOperation;
- (void)start;
- (void)startOperation;

@end
