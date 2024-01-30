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

- (void)inspectOtherChangesWithBlock:(id /* block */)a0;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)initWithXPCDictionary:(id)a0;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)_initWithChanges:(id)a0 otherSettingsDiff:(id)a1 settingsClass:(Class)a2;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)inspectChangesWithBlock:(id /* block */)a0;
- (void)evaluateWithInspector:(id)a0 context:(void *)a1;
- (id)initWithChanges:(id)a0 fromSettings:(id)a1 toSettings:(id)a2;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;

@end
