@interface PROReadWriteLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

- (void)unlock;
- (void)lock;
- (void)lockForReading;
- (void)lockForWriting;
- (id)init;
- (void)dealloc;

@end
