@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (void)main;
- (void)dealloc;
- (long long)queuePriority;

@end
