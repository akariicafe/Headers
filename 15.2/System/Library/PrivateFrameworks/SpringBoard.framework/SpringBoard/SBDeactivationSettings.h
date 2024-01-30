@class NSString, BSMutableSettings;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForDeactivationSetting:(unsigned int)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)applyDeactivationSettings:(id)a0;
- (id)succinctDescription;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyDeactivationSettings;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setObject:(id)a0 forDeactivationSetting:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (long long)flagForDeactivationSetting:(unsigned int)a0;
- (void)setFlag:(long long)a0 forDeactivationSetting:(unsigned int)a1;
- (BOOL)boolForDeactivationSetting:(unsigned int)a0;
- (void)clearDeactivationSettings;

@end
