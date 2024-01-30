@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings

@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsB;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsB;
@property (nonatomic) double weighting;

- (BOOL)isBackdropVisible;
- (void).cxx_destruct;
- (void)copyAdditionalSettingsFromSettings:(id)a0;
- (void)setDefaultValues;
- (void)computeOutputSettingsUsingModel:(id)a0;
- (void)setRequiresColorStatistics:(BOOL)a0;
- (BOOL)requiresBackdropLayer;

@end
