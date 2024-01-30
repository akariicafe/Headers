@interface FBSSceneClientSettingsDiff : FBSSettingsDiff

+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)evaluateWithInspector:(id)a0 context:(void *)a1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;

@end
