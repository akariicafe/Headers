@class NSString, FBSceneWorkspace;
@protocol SBFSceneWorkspaceControllerDelegate;

@interface SBFSceneWorkspaceController : NSObject <BSInvalidatable, BSDescriptionProviding> {
    FBSceneWorkspace *_sceneWorkspace;
}

@property (readonly, copy, nonatomic) NSString *sceneWorkspaceIdentifier;
@property (readonly, weak, nonatomic) id<SBFSceneWorkspaceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneFromIdentityToken:(id)a0;
- (BOOL)enumerateScenesWithBlock:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (void)createSceneForProcessIdentity:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
