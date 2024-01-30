@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (nonatomic) long long style;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) int styleOverridesToCancel;

- (void)setLegibilitySettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlpha:(id)a0;
- (void)applySettings:(id)a0;
- (void)setStyle:(long long)a0;
- (void)setStyleOverridesToCancel:(int)a0;

@end
