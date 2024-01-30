@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (id)unsafeGuardedData;
- (void)runWithLockAcquired:(id /* block */)a0;
- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;
- (id)guardedDataAssertingLockContext;
- (void).cxx_destruct;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;

@end
