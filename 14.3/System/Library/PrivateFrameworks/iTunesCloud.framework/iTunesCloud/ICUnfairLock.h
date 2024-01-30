@interface ICUnfairLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)unlock;
- (void)lock;
- (id)init;
- (void)lockWithBlock:(id /* block */)a0;

@end
