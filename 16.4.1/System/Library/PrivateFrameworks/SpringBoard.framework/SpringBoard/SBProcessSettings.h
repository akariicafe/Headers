@class NSString, BSMutableSettings;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)clearProcessSettings;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (BOOL)boolForProcessSetting:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)dealloc;
- (id)copyProcessSettings;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)applyProcessSettings:(id)a0;
- (long long)flagForProcessSetting:(long long)a0;
- (void).cxx_destruct;
- (id)objectForProcessSetting:(long long)a0;

@end
