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

- (BOOL)boolForProcessSetting:(long long)a0;
- (void)clearProcessSettings;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (long long)flagForProcessSetting:(long long)a0;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (void)applyProcessSettings:(id)a0;
- (id)applicationSceneEntity;
- (id)objectForProcessSetting:(long long)a0;
- (id)copyProcessSettings;
- (BOOL)isApplicationSceneEntity;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (Class)viewControllerClass;
- (void)_initializeWithSceneHandle:(id)a0;
- (void)removeActions:(id)a0;
- (id /* block */)entityGenerator;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSceneHandle:(id)a0;
- (void)removeAllActions;
- (void)addActions:(id)a0;
- (void)translateActivationSettingsToActions;

@end
