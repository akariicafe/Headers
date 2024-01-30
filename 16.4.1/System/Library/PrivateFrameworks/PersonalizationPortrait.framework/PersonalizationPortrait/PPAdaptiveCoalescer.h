@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPAdaptiveCoalescer : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)garbageCollectPendingKeysForNowDate:(id)a0;
- (void)coalesceRequestKey:(id)a0 handler:(id)a1 executeRequestAndInvokeHandlersBlock:(id /* block */)a2 nowDate:(id)a3;
- (id)init;
- (void)coalesceRequestKey:(id)a0 handler:(id)a1 executeRequestAndInvokeHandlersBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
