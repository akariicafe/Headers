@class SBApplicationSceneEntity, NSString, SBWorkspaceTransitionRequest, UIApplicationSceneTransitionContext, FBSMutableSceneParameters, SBWorkspaceApplicationSceneTransitionContext, UIApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    BOOL _suspendedActivation;
}

@property (readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) BOOL shouldSendActivationResult;

- (void)_sendActivationResultWithError:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)a0;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;
- (void).cxx_destruct;

@end
