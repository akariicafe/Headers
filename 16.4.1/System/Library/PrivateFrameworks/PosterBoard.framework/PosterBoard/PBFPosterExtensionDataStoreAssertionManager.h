@class NSString, NSMapTable, NSHashTable;

@interface PBFPosterExtensionDataStoreAssertionManager : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    NSMapTable *_internalLock_inUseAssertionsByIdentity;
    NSHashTable *_observers;
    BOOL _internalLock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateInUseAssertion:(id)a0 forServerPosterPath:(id)a1;
- (void)enumerateObservers:(id /* block */)a0;
- (long long)_numberOfInUseAssertionsForPath:(id)a0;
- (BOOL)_appendAssertion:(id)a0 forServerPosterPath:(id)a1;
- (void)addObserver:(id)a0;
- (id)inUsePosterPathIdentitiesForReason:(id)a0;
- (long long)numberOfAssertionsForReason:(id)a0;
- (long long)_internalLock_numberOfInUseAssertionsForPath:(id)a0;
- (id)inUseAssertionForPath:(id)a0 reason:(id)a1;
- (void)removeObserver:(id)a0;
- (BOOL)_internalLock_appendAssertion:(id)a0 forServerPosterPath:(id)a1;
- (BOOL)_removeAssertion:(id)a0 forServerPosterPath:(id)a1;
- (BOOL)_internalLock_removeAssertion:(id)a0 forServerPosterPath:(id)a1;
- (id)init;
- (id)inUseAssertionForIdentity:(id)a0 reason:(id)a1;
- (id)acquireInUseAssertionForPath:(id)a0 reason:(id)a1;
- (BOOL)isPosterInUse:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
