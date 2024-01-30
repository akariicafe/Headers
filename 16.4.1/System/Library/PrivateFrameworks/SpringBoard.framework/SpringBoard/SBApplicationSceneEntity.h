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

- (id)_initWithSceneHandle:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)clearProcessSettings;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (void)addActions:(id)a0;
- (BOOL)boolForProcessSetting:(long long)a0;
- (Class)viewControllerClass;
- (void)_initializeWithSceneHandle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isApplicationSceneEntity;
- (BOOL)isEqual:(id)a0;
- (id)copyProcessSettings;
- (void)removeActions:(id)a0;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (void)translateActivationSettingsToActions;
- (id /* block */)entityGenerator;
- (void)applyProcessSettings:(id)a0;
- (id)applicationSceneEntity;
- (void)removeAllActions;
- (long long)flagForProcessSetting:(long long)a0;
- (void).cxx_destruct;
- (id)objectForProcessSetting:(long long)a0;

@end
