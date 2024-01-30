@class NSString, BSMutableSettings;

@interface SBActivationSettings : NSObject <BSSettingDescriptionProvider, SBActivationSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)_settingsAreValidToMoveContentToNewScene;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)flagForActivationSetting:(unsigned int)a0;
- (void)applyActivationSettings:(id)a0;
- (id)succinctDescription;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)clearActivationSettings;
- (void)dealloc;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (id)copyActivationSettingsPassingFilter:(id /* block */)a0;

@end
