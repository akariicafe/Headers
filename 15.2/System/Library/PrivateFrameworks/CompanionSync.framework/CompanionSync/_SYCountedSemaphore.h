@interface _SYCountedSemaphore : NSObject {
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic BOOL _invalidated;
}

- (void)signal;
- (BOOL)waitWithTimeout:(double)a0;
- (id)init;
- (id)initWithCount:(long long)a0;
- (void)invalidate;
- (BOOL)_waitSemaphoreWithTimeout:(double)a0;
- (void)_signalSemaphore;
- (void)_ensureSemaphore;

@end
