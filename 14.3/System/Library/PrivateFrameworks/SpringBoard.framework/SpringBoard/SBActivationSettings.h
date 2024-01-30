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
- (long long)flagForActivationSetting:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)applyActivationSettings:(id)a0;
- (void)dealloc;
- (id)objectForActivationSetting:(unsigned int)a0;
- (id)succinctDescription;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyActivationSettings;
- (void)clearActivationSettings;
- (id)copyActivationSettingsPassingFilter:(id /* block */)a0;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
