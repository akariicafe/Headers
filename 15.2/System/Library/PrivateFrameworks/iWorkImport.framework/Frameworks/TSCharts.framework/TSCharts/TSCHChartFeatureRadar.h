@interface TSCHChartFeatureRadar : TSCHChartFeature

- (id)supportedAxisScales;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)defaultDataFileName;
- (id)initWithChartType:(id)a0;
- (BOOL)supportsEllipticalGridlines;
- (BOOL)supportsCategoryLabelExplosion;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsAxisNames;
- (BOOL)hasFixedFrameRatio;
- (int)representativeGridValueAxisType;
- (BOOL)supportsStartAngleRotation;
- (BOOL)isNonSquareChartsEnabled;

@end
