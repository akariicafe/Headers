@interface ICUnfairLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)lock;
- (void)unlock;
- (void)lockWithBlock:(id /* block */)a0;
- (id)init;

@end
