@class _PASLock;

@interface TRIExcessiveStaleFactorsUsageTimer : NSObject {
    _PASLock *_lock;
}

- (id)initWithNamespaceName:(id)a0 delayTimeInSeconds:(double)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invalidate;

@end
