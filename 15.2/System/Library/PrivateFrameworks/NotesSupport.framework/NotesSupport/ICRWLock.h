@interface ICRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (void)unlock;
- (void)writeLock;
- (id)init;
- (void)dealloc;
- (int)tryReadLock;
- (void)readLock;

@end
