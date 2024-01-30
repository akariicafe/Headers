@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings

@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsB;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsA;
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsB;
@property (nonatomic) double weighting;

- (void)setDefaultValues;
- (BOOL)isBackdropVisible;
- (void)computeOutputSettingsUsingModel:(id)a0;
- (void)copyAdditionalSettingsFromSettings:(id)a0;
- (void).cxx_destruct;
- (void)setRequiresColorStatistics:(BOOL)a0;
- (BOOL)requiresBackdropLayer;

@end
