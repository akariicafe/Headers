@class NSString, BSSettings, BSSettingsDiff;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider> {
    BSSettings *_changes;
    BSSettingsDiff *_otherSettingsDiff;
    Class _settingsClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)inspectChangesWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)inspectOtherChangesWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithChanges:(id)a0 fromSettings:(id)a1 toSettings:(id)a2;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initWithChanges:(id)a0 otherSettingsDiff:(id)a1 settingsClass:(Class)a2;
- (void)evaluateWithInspector:(id)a0 context:(void *)a1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;

@end
