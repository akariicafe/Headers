@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (void).cxx_destruct;
- (id)guardedDataAssertingLockContext;
- (void)runWithLockAcquired:(id /* block */)a0;
- (id)unsafeGuardedData;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;

@end
