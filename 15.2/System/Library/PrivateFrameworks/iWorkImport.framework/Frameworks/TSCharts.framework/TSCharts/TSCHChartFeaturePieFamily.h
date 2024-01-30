@interface TSCHChartFeaturePieFamily : TSCHChartFeature

- (BOOL)supportsMultipleValuesPerSeries;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (BOOL)supportsReferenceLines;
- (BOOL)editableFormatForValueStrings;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (BOOL)supportsLabelExplosion;
- (id)genericToSpecificPropertyMap;
- (id)initWithChartType:(id)a0;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBorderStroke;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsTrendLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)hasFixedFrameRatio;
- (BOOL)rendersBackgroundAxis;
- (BOOL)hasExplodableSeriesElements;
- (BOOL)rendersUsingRadialGeometry;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (int)representativeGridValueAxisType;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)supportsStartAngleRotation;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;

@end
