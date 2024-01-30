@class NSString, NSHashTable, SBApplication;

@interface SBApplicationSceneHandle : SBSceneHandle {
    NSHashTable *_sceneUpdateContributers;
    unsigned long long _userLaunchSignpostID;
    double _userLaunchEventTime;
}

@property (readonly, nonatomic) SBApplication *application;
@property (readonly, nonatomic) NSString *persistenceIdentifier;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic) long long layoutRole;

+ (id)lookupOrCreatePersistenceIDFromApplication:(id)a0 sceneID:(id)a1;

- (id)_initWithDefinition:(id)a0;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)a0;
- (id)_persistenceIdentifier;
- (id)_createApplicationSceneTransitionContextFromContext:(id)a0 entity:(id)a1;
- (void)_applicationsDidChange:(id)a0;
- (id)_createParametersFromTransitionContext:(id)a0 entity:(id)a1;
- (id)_initWithScene:(id)a0;
- (id)newSceneViewController;
- (id)_initWithApplication:(id)a0 sceneDefinition:(id)a1 displayIdentity:(id)a2;
- (id)_initWithApplication:(id)a0 scene:(id)a1 displayIdentity:(id)a2;
- (void)_modifyApplicationTransitionContext:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (id)_createApplicationSceneClientSettingsFromContext:(id)a0 entity:(id)a1 initialSceneSettings:(id)a2;
- (void)_modifyApplicationSceneClientSettings:(id)a0 fromRequestContext:(id)a1 entity:(id)a2 initialSceneSettings:(id)a3;
- (void)addSceneUpdateContributer:(id)a0;
- (id)_createProcessExecutionContextFromContext:(id)a0 entity:(id)a1;
- (void)removeSceneUpdateContributer:(id)a0;
- (id)newSceneViewWithReferenceSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 hostRequester:(id)a2;
- (id)displayItemRepresentation;
- (void)_modifyProcessExecutionContext:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (void)_modifyApplicationSceneSettings:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (id)_createApplicationSceneSettingsFromContext:(id)a0 entity:(id)a1;
- (void)_commonInitWithApplication:(id)a0 sceneIdentifier:(id)a1 displayIdentity:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
