@interface PGUnfairLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)lock;
- (void)unlock;
- (id)init;

@end
