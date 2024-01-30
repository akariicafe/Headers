@class NSString, NSMapTable, NSHashTable;
@protocol BSInvalidatable;

@interface PBFRuntimeAssertionManager : NSObject <PBFRuntimeAssertionProviding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _stateLock_invalidated;
    NSHashTable *_stateLock_knownAssertions;
    NSMapTable *_stateLock_acquistionDateForAssertion;
    NSMapTable *_stateLock_acquistionInvalidationHandlerForAssertion;
    id<BSInvalidatable> _stateCaptureSentinel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acquirePrewarmRuntimeAssertionForReason:(id)a0 target:(id)a1 invalidationHandler:(id /* block */)a2;
- (id)acquirePosterUpdateRuntimeAssertionForReason:(id)a0 target:(id)a1;
- (id)_stateLock_debugDescriptionForTarget:(id)a0;
- (id)_stateLock_debugDescriptionForPosterExtensionProcessAssertions;
- (void)_runningBoardAssertionStateDidUpdate:(id)a0 assertionIdentifier:(id)a1 error:(id)a2;
- (id)acquirePosterUpdateMemoryAssertionForReason:(id)a0 target:(id)a1 auditToken:(id)a2 posterProviderBundleIdentifier:(id)a3;
- (id)_stateLock_debugDescriptionForPosterBoardProcessAssertions;
- (void)dealloc;
- (id)_buildRBSAssertionForTarget:(id)a0 assertionIdentifier:(id)a1 explanation:(id)a2 invalidationHandler:(id /* block */)a3;
- (id)init;
- (id)acquireAssertion:(id)a0 reason:(id)a1 target:(id)a2 invalidationHandler:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;

@end
