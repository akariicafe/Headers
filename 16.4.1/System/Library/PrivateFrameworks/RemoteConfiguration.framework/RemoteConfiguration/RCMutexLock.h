@interface RCMutexLock : NSObject <RCLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)performWithLockSync:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;

@end
