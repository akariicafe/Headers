@interface PROReadWriteLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)lockForReading;
- (void)lockForWriting;

@end
