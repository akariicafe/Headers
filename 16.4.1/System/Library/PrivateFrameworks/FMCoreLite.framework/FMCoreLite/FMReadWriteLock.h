@class NSString;

@interface FMReadWriteLock : NSObject

@property (retain, nonatomic) NSString *lockName;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

- (void)performWithWriteLock:(id /* block */)a0;
- (id)initWithLockName:(id)a0;
- (void)performWithReadLock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
