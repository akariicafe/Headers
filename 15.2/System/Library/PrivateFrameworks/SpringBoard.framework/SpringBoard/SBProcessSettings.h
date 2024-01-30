@class NSString, BSMutableSettings;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolForProcessSetting:(long long)a0;
- (void)clearProcessSettings;
- (void)setFlag:(long long)a0 forProcessSetting:(long long)a1;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (long long)flagForProcessSetting:(long long)a0;
- (void)setObject:(id)a0 forProcessSetting:(long long)a1;
- (void)applyProcessSettings:(id)a0;
- (id)objectForProcessSetting:(long long)a0;
- (id)copyProcessSettings;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;

@end
