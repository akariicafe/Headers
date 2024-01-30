@interface SCNRecursiveLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end
