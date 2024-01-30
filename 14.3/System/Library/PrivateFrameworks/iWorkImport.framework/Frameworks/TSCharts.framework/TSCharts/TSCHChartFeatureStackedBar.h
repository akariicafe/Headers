@interface TSCHChartFeatureStackedBar : TSCHChartFeatureBar

- (BOOL)supportsSeriesLabels;
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
- (BOOL)supportsTrendLines;
- (BOOL)supportsCategoryAxisSeriesNames;

@end
