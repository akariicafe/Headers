@class PVCanceler, NSObject;
@protocol OS_dispatch_queue;

@interface PVQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _currentlyExecutingTasksCount;
    PVCanceler *_canceler;
    BOOL _terminating;
    BOOL _isConcurrent;
}

- (void).cxx_destruct;
- (void)resume;
- (void)waitForCurrentTasksToFinish;
- (id)initQueueWithName:(id)a0 isSerial:(BOOL)a1 qos_class:(unsigned int)a2;
- (void)execute_async:(id /* block */)a0;
- (void)execute_after:(unsigned long long)a0 block:(id /* block */)a1;
- (void)execute_sync:(id /* block */)a0;
- (void)dispatch_barrier_async:(id /* block */)a0;
- (void)dispatch_barrier_sync:(id /* block */)a0;
- (void)suspend_sync;
- (void)suspend_async;
- (void)terminate_sync;

@end
