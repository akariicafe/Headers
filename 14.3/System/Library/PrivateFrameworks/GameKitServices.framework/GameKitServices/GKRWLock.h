@interface GKRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (void)unlock;
- (id)init;
- (void)dealloc;
- (void)wrlock;
- (void)rdlock;
- (int)tryrdlock;

@end
