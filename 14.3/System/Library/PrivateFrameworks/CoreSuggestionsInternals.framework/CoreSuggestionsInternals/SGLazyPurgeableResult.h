@class NSObject;
@protocol OS_dispatch_source;

@interface SGLazyPurgeableResult : SGLazyResult {
    id _weakData;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_source> *_idleTimeoutSource;
    double _idleTimeout;
    _Atomic BOOL _nil;
}

- (id)result;
- (void).cxx_destruct;
- (void)dealloc;
- (id)resultIfAvailable;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0 idleTimeout:(double)a1;

@end
