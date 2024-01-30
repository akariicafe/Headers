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

- (Class)repClass;
- (Class)layoutClass;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(const void *)a0 barShape:(int)a1;
- (BOOL)supportsReferenceLines;
- (double)maxDepthRatio;
- (id)sceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1 styleProvidingSource:(id)a2;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsShadowOffset;
- (Class)presetImagerClass;
- (struct CGSize { double x0; double x1; })minimumChartBodySize;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBorderStroke;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsTrendLines;
- (BOOL)supportsErrorBars;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsValueLabelSpacing;
- (id)animationFiltersWithDefaultFilters:(id)a0;
- (Class)chartLayoutItemClass;
- (Class)chartLayoutClass;
- (Class)sageGeometeryHelperClass;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsAxisLine;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (unsigned long long)presentationDimension;
- (int)chartBodyBoundsDefinition;
- (struct CGSize { double x0; double x1; })minimumChartBodySizeForTransformingGeometry;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsValueAxisLabelsPosition;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsTickmarks;
- (BOOL)supportsGridlineTickmarks;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)supportsIncrementalResize;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
