@class NSString, BSMutableSettings, NSNumber, _UILegibilitySettings;

@interface SBStatusBarSettings : NSObject <BSSettingDescriptionProvider, BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=_BSSettings) BSMutableSettings *BSSettings;
@property (readonly, nonatomic) NSNumber *alpha;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) unsigned long long styleOverridesToSuppress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithBSSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (unsigned long long)styleOverridesToSuppress;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)legibilitySettings;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)style;
- (void).cxx_destruct;
- (id)alpha;

@end
