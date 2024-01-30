@interface NPKThreadSafeObserverManager : NPKObserverManager {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;

@end
