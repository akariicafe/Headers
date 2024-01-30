@class FBSWorkspace, NSString, FBSSerialQueue, FBSUIApplicationWorkspace;
@protocol FBSUIApplicationWorkspaceDelegate, BSInvalidatable;

@interface FBSUIApplicationWorkspaceShim : NSObject <FBSWorkspaceDelegate_Exiting> {
    FBSSerialQueue *_queue;
    FBSUIApplicationWorkspace *_original;
    FBSWorkspace *_workspace;
    id<FBSUIApplicationWorkspaceDelegate> _delegate;
    id<BSInvalidatable> _processExpirationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSceneCreationWithIdentifier:(id)a0 initialClientSettings:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestSceneCreationWithInitialClientSettings:(id)a0 completion:(id /* block */)a1;
- (BOOL)trackSystemAnimationFence:(id)a0;
- (void)workspace:(id)a0 willDestroyScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)requestSceneFromEndpoint:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)sceneWithIdentifier:(id)a0;
- (void)workspace:(id)a0 didCreateScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (id)scenes;
- (BOOL)isTrackingAnySystemAnimationFence;
- (id)_initWithSerialQueue:(id)a0 original:(id)a1;
- (void)setDelegate:(id)a0;
- (void)workspace:(id)a0 didReceiveActions:(id)a1;
- (void)workspaceShouldExit:(id)a0 withTransitionContext:(id)a1;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)a0;
- (id)defaultShellEndpoint;
- (id)requestSystemAnimationFence;
- (id)delegate;

@end
