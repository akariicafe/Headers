@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _internal;
    unsigned int _internalOptions;
}

- (void)lock;
- (void)unlock;
- (void)assertNotOwner;
- (void)performBlock:(id /* block */)a0;
- (void)assertOwner;
- (id)initWithOptions:(unsigned long long)a0;

@end
