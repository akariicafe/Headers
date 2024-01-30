@interface __HMFOSUnfairLock : HMFUnfairLock {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internal;
    unsigned int _internalOptions;
}

- (id)initWithOptions:(unsigned long long)a0;
- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)lock;
- (void)assertOwner;
- (void)assertNotOwner;

@end
