@class NSObject;
@protocol OS_dispatch_source;

@interface _PASLazyPurgeableResult : _PASLazyResult {
    id _weakData;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_source> *_idleTimeoutSource;
    double _idleTimeout;
    _Atomic BOOL _nil;
}

- (id)result;
- (void)dealloc;
- (id)resultIfAvailable;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 idleTimeout:(double)a1;

@end
