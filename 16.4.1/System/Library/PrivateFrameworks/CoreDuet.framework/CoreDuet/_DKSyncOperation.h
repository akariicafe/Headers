@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)endOperation;
- (void)startOperation;

@end
