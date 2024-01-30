@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (void)assertCurrentThreadIsOwner;
- (id)init;
- (id)description;
- (void)assertCurrentThreadIsNotOwner;

@end
