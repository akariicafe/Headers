@interface _PASLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_owner;
    id _guardedData;
}

- (id)guardedDataAssertingLockContext;
- (id)unsafeGuardedData;
- (void)runWithLockAcquired:(id /* block */)a0;
- (id)initWithGuardedData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
