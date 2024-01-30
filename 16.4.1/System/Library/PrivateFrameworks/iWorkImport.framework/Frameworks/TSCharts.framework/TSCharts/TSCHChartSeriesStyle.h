@interface TSCHChartSeriesStyle : TSCHBaseStyle

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)getURLForImage:(id)a0;
+ (id)identifierForRoleIndex:(unsigned long long)a0 ordinal:(unsigned long long)a1;
+ (id)bootstrappedSeriesStyleWithContext:(id)a0 seriesIndex:(unsigned long long)a1 presetIndex:(unsigned long long)a2;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)a0;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)p_upgrade3DFillSubclassTSDFill:(id)a0;
- (void)p_upgradeBubbleChartProperties:(id)a0;
- (void)handlePreUFFUpgradesForOverridePropertyMapWithUnarchiver:(id)a0;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)a0;
- (void)p_upgrade3DChartProperties:(id)a0;
- (void)p_upgradeMixedChartProperties:(id)a0;
- (void)p_upgradeRadarChartProperties:(id)a0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)a0;
- (void)p_upgradeSeparateVisibilityProperties:(id)a0;

@end
