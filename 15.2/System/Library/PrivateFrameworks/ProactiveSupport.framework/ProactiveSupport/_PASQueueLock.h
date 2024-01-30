@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (id)guardedDataAssertingLockContext;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (id)unsafeGuardedData;
- (void)runWithLockAcquired:(id /* block */)a0;
- (void).cxx_destruct;

@end
