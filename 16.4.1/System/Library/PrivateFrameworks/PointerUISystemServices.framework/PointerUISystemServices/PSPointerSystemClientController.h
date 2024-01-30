@class NSString, FBSceneWorkspace, RBSProcessIdentity;
@protocol PSPointerSystemClientControllerDelegate;

@interface PSPointerSystemClientController : NSObject <FBSceneWorkspaceDelegate, FBSceneDelegate> {
    FBSceneWorkspace *_sceneWorkspace;
    RBSProcessIdentity *_pointerUIDProcessIdentity;
}

@property (weak, nonatomic) id<PSPointerSystemClientControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)workspace:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (void)workspace:(id)a0 didAddScene:(id)a1;
- (void)workspace:(id)a0 willRemoveScene:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateScenesForPointerForDisplayConfiguration:(id)a0;
- (void)prepareScenesForPointerForDisplayConfiguration:(id)a0;
- (void)_invalidateSceneForIdentifierPrefix:(id)a0 displayConfiguration:(id)a1;
- (void)_prepareSceneForIdentifierPrefix:(id)a0 displayConfiguration:(id)a1;
- (id)_sceneIdentifierForIdentifierPrefix:(id)a0 displayConfiguration:(id)a1;

@end
