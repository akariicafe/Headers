@interface TSCHReferenceLineStyle : TSCHBaseStyle

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)identifierForRoleIndex:(unsigned long long)a0 ordinal:(unsigned long long)a1;
+ (id)defaultStyleForPresetFromChartStyle:(id)a0 seriesStyle:(id)a1 paragraphStyles:(id)a2 valueAxisStyle:(id)a3;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)a0;
+ (id)overrideMapFromChartStyle:(id)a0 seriesStyle:(id)a1 paragraphStyles:(id)a2 valueAxisStyle:(id)a3;
+ (id)p_outsideSeriesLabelColorOfSeriesStyle:(id)a0 paragraphStyles:(id)a1;
+ (unsigned long long)p_valueAxisLabelParagraphStyleIndexWithValueAxisStyle:(id)a0 paragraphStyles:(id)a1;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)a0;

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
