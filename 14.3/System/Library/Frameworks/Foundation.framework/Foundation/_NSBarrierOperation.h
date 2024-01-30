@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (long long)queuePriority;
- (void)dealloc;
- (void)main;

@end
