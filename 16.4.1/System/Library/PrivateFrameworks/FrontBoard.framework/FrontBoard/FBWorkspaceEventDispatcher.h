@class NSCountedSet, NSMapTable, FBWorkspaceConnectionsStateStore, NSMutableDictionary, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceConnectionsStateStore *_store;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_sourcesByPidNumber;
    NSMapTable *_lock_targetsByIdentifier;
    NSCountedSet *_main_incompleteTargetRegistrations;
    NSMutableDictionary *_lock_restartAssertionsByPidNumber;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
}

+ (id)sharedInstance;

- (void)_flushCalloutsWithCompletion:(id /* block */)a0;
- (id)_initWithConnectionStore:(id)a0;
- (void)noteHandshakeFromSource:(id)a0 withRemnants:(id)a1;
- (void)_mainThread_dispatchHandshakeFromSource:(id)a0 toTarget:(id)a1;
- (id)registerTarget:(id)a0;
- (id)init;
- (id)registerSourceWithProcessHandle:(id)a0;
- (void).cxx_destruct;

@end
