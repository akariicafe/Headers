@class SBProcessSettings, SBApplication, NSMutableSet, NSString, SBApplicationSceneHandle;

@interface SBApplicationSceneEntity : SBWorkspaceEntity <SBProcessSettings>

@property (readonly, nonatomic) SBProcessSettings *processSettings;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBApplication *application;
@property (readonly, copy, nonatomic) NSMutableSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initializeWithSceneHandle:(id)a0;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (BOOL)isApplicationSceneEntity;
- (id)_initWithSceneHandle:(id)a0;
- (void)removeActions:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)entityGenerator;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (Class)viewControllerClass;
- (void)clearProcessSettings;
- (void)translateActivationSettingsToActions;
- (void)addActions:(id)a0;
- (id)objectForProcessSetting:(long long)a0;
- (id)copyProcessSettings;
- (BOOL)boolForProcessSetting:(long long)a0;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (void)removeAllActions;
- (long long)flagForProcessSetting:(long long)a0;
- (id)applicationSceneEntity;
- (void)applyProcessSettings:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
