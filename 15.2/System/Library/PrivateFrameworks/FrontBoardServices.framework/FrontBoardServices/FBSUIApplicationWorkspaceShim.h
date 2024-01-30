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

- (id)sceneWithIdentifier:(id)a0;
- (id)scenes;
- (void)requestSceneCreationWithIdentifier:(id)a0 initialClientSettings:(id)a1 completion:(id /* block */)a2;
- (void)workspace:(id)a0 willDestroyScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)workspace:(id)a0 didCreateScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (void)workspaceShouldExit:(id)a0 withTransitionContext:(id)a1;
- (void)setDelegate:(id)a0;
- (id)_initWithSerialQueue:(id)a0 original:(id)a1;
- (id)defaultShellEndpoint;
- (void).cxx_destruct;
- (id)delegate;
- (void)requestSceneCreationWithInitialClientSettings:(id)a0 completion:(id /* block */)a1;
- (void)requestSceneFromEndpoint:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)workspace:(id)a0 didReceiveActions:(id)a1;

@end
