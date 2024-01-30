@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)unlock;
- (BOOL)tryLock;
- (void)assertCurrentThreadIsNotOwner;
- (void)lock;
- (id)description;
- (id)init;
- (void)assertCurrentThreadIsOwner;

@end
