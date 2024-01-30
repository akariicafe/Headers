@interface GKRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (void)unlock;
- (void)wrlock;
- (void)rdlock;
- (id)init;
- (void)dealloc;
- (int)tryrdlock;

@end
