@class FBMutableWorkspaceConnectionsState, FBWorkspaceConnectionsStateStore, NSMutableDictionary;
@protocol FBWorkspaceEventDispatcherTarget;

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceConnectionsStateStore *_store;
    id<FBWorkspaceEventDispatcherTarget> _target;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_workspaces;
    NSMutableDictionary *_lock_restartAssertions;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
}

+ (id)sharedInstance;

- (void)noteHandshakeForWorkspaceRegistration:(id)a0 withRemnants:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithConnectionStore:(id)a0;
- (void)_mainThread_dispatchHandshakeFromWorkspace:(id)a0 toTarget:(id)a1;
- (id)registerWorkspaceWithProcessHandle:(id)a0;
- (void)registerTarget:(id)a0;

@end
