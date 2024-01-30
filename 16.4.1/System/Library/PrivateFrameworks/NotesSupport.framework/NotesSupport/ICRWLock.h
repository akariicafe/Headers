@interface ICRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (void)writeLock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)readLock;
- (int)tryReadLock;

@end
