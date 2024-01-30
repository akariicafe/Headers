@class TSSPropertyMap;

@interface TSCHChartSeriesNonStyle : TSCHBaseStyle

@property (copy, nonatomic) TSSPropertyMap *overrideMapForSameAsSource;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)formatObjectPropertySet;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)a0;
- (id)overrideMapForSameAsSource;
- (void)p_upgradeMixedChartProperties:(id)a0;
- (void)p_upgradeRadarChartProperties:(id)a0;
- (void)p_upgradeSeparateVisibilityProperties:(id)a0;
- (void)setOverrideMapForSameAsSource:(id)a0;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)a0;

@end
