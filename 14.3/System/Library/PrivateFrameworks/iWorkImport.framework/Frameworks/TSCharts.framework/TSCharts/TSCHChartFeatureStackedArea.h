@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea

- (BOOL)supportsReferenceLines;
- (double)maxDepthRatio;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (BOOL)drawValueLabelsForZero;
- (id)supportedAxisScales;
- (BOOL)editableFormatForValueStrings;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (int)stackingSignRule;
- (Class)presetImagerClass;
- (BOOL)reverseSingleColumnLegendOrder;
- (BOOL)supportsTrendLines;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsInterSetDepthGap;

@end
