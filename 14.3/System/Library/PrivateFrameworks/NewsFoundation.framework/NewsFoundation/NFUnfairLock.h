@interface NFUnfairLock : NSObject <NFLocking>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (nonatomic) unsigned int unfairLockOptions;

- (id)initWithOptions:(long long)a0;
- (void)performWithLockSync:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (id)init;

@end
