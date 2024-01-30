@interface _SYCountedSemaphore : NSObject {
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic BOOL _invalidated;
}

- (BOOL)waitWithTimeout:(double)a0;
- (void)signal;
- (id)init;
- (id)initWithCount:(long long)a0;
- (void)invalidate;
- (void)_ensureSemaphore;
- (void)_signalSemaphore;
- (BOOL)_waitSemaphoreWithTimeout:(double)a0;

@end
