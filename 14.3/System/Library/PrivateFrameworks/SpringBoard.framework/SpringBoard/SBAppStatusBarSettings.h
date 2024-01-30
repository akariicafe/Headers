@class NSString, BSMutableSettings, NSNumber, _UILegibilitySettings;

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=_BSSettings) BSMutableSettings *BSSettings;
@property (readonly, nonatomic) NSNumber *alpha;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) int styleOverridesToCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)_initWithBSSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)dealloc;
- (long long)style;
- (id)alpha;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)legibilitySettings;
- (int)styleOverridesToCancel;
- (BOOL)isEqual:(id)a0;

@end
