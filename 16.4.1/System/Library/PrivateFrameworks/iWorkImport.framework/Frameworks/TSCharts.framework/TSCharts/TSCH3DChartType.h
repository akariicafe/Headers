@class NSSet, NSString;
@protocol TSCH3DAxisLabelPositioner;

@interface TSCH3DChartType : TSCH2DChartType

@property (class, readonly, copy, nonatomic) NSSet *allAnimationFilters;

@property (readonly, copy, nonatomic) NSSet *animationFilters;
@property (readonly, nonatomic) int labelOrientation;
@property (readonly, nonatomic) id<TSCH3DAxisLabelPositioner> valueLabelPositioner;
@property (readonly, nonatomic) id<TSCH3DAxisLabelPositioner> categoryLabelPositioner;
@property (readonly, nonatomic) Class stageClass;
@property (readonly, nonatomic) BOOL supportsColumnShape;
@property (readonly, nonatomic) BOOL supportsBevels;
@property (readonly, nonatomic) BOOL supportsInterSetDepthGap;
@property (readonly, nonatomic) BOOL needsRefinementForInwardLayout;
@property (readonly, nonatomic) BOOL isHomogeneous;
@property (readonly, nonatomic) NSString *columnShapeUIName;
@property (readonly, nonatomic) id renderers;
@property (readonly, nonatomic) double minDepthRatio;
@property (readonly, nonatomic) double sageMaxDepthRatio;
@property (readonly, nonatomic) double spiceMaxDepthRatio;
@property (readonly, nonatomic) unsigned long long depthRatioDimension;

+ (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const void *)a0 chartType:(id)a1 barShape:(int)a2;

- (Class)layoutClass;
- (Class)repClass;
- (BOOL)supportsValueAxisLabelsPosition;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const void *)a0 barShape:(int)a1;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (id)animationFiltersWithDefaultFilters:(id)a0;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (int)majorGridlineStrokeProperty;
- (double)maxDepthRatio;
- (struct CGSize { double x0; double x1; })minimumChartBodySize;
- (struct CGSize { double x0; double x1; })minimumChartBodySizeForTransformingGeometry;
- (unsigned long long)presentationDimension;
- (Class)presetImagerClass;
- (Class)sageGeometeryHelperClass;
- (id)sceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1 styleProvidingSource:(id)a2;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsAxisLine;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBorderStroke;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGridlineShadow;
- (BOOL)supportsGridlineTickmarks;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsShadowOffset;
- (BOOL)supportsTickmarks;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueLabelSpacing;

@end
