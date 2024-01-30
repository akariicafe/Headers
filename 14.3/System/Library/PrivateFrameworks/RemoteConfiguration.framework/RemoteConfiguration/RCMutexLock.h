@interface RCMutexLock : NSObject <RCLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)initWithOptions:(unsigned long long)a0;
- (void)performWithLockSync:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end
