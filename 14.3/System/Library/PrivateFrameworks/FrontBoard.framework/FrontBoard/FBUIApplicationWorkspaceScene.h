@class NSMutableSet, NSMutableArray;
@protocol BSInvalidatable;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    unsigned long long _inFlightUpdateEvents;
    unsigned long long _inFlightLifecycleEvents;
    unsigned char _assertionState;
    id<BSInvalidatable> _workspaceAssertion;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)a0;
- (void)_workspaceQueue_updateAssertion;
- (unsigned char)_workspaceQueue_determineSceneActionFromSettings:(id)a0 toSettings:(id)a1;
- (void)_workspaceQueue_handleDidUpdateSettings:(id)a0 withDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)a0 transitionContext:(id)a1;
- (void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)a0;
- (void)_workspaceQueue_handleInvalidationWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithParentWorkspace:(id)a0 host:(id)a1;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)a0;
- (void)_workspaceQueue_cancelAllWatchdogTimers;

@end
