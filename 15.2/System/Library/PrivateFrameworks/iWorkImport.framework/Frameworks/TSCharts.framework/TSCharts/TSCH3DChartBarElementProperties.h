@class TSCH3DLabelResources, NSMutableArray, TSCH3DBarChartDefaultAppearance;
@protocol TSCH3DBarChartAppearance;

@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _maxValues;
    struct vector<TSCH3D::BarElementInfo, std::allocator<TSCH3D::BarElementInfo>> { struct BarElementInfo *__begin_; struct BarElementInfo *__end_; struct __compressed_pair<TSCH3D::BarElementInfo *, std::allocator<TSCH3D::BarElementInfo>> { struct BarElementInfo *__value_; } __end_cap_; } _elementInfos;
    BOOL _stacked;
    float _barWidth;
    float _elementsXOffset;
    float _seriesOffset;
    float _setWidth;
    struct array<TSCH3D::BarExtrusionDetails, 2> { struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float detail; float tension; float adaptiveThreshold; float creaseAngle; int crossType; } crossSection; struct BarExtrusionSpineDetails { float bevelHeight; long long bevelSlices; long long stride; float creaseAngle; } spine; } __elems_[2]; } _extrusionDetails;
    TSCH3DBarChartDefaultAppearance *_appearance;
    NSMutableArray *_rangeCache;
}

@property (retain, nonatomic) TSCH3DLabelResources *seriesLabels;
@property (readonly, nonatomic) id<TSCH3DBarChartAppearance> appearance;
@property (readonly, nonatomic) int barShape;
@property (readonly, nonatomic) BOOL hasBevelEdges;

- (void).cxx_destruct;
- (float)barWidth;
- (id)init;
- (void)updateLabels;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (void)p_updateAppearance;
- (void)createResources;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)texcoordsForSeries:(id)a0 index:(const void *)a1;
- (id)geometryForSeries:(id)a0 index:(const void *)a1;
- (id)boundsGeometryForSeries:(id)a0 index:(const void *)a1;
- (id)normalsForSeries:(id)a0 index:(const void *)a1;
- (void)p_createAppearance;
- (void)releaseAndClearAppearance;
- (long long)flatIndex:(void *)a0;
- (struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; } *)elementInfoAtIndex:(const void *)a0;
- (id)calculateInterceptForSeries:(id)a0;
- (id)p_calculateRangeForSeries:(id)a0 index:(void *)a1 intercept:(id)a2;
- (id)rangeForSeries:(id)a0 index:(void *)a1;
- (BOOL)beveledAtIndex:(const void *)a0;
- (id)p_appearance;
- (const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } *)extrusionDetailsForShape:(int)a0;
- (id)p_barResourceCacheItemAtIndex:(const void *)a0;
- (void)setElementInfo:(const struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; } *)a0 atIndex:(const void *)a1;
- (void)setMaxValueForSeries:(long long)a0 value:(float)a1;
- (float)chartInitialDepthOffset;
- (void)calculateLayout;
- (void)p_updateRangeCache;
- (void)updateMaxValuesAndBevels;
- (id)p_appearanceClasses;
- (void)p_resetExtrusionDetails;
- (struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; })barElementInfoAtIndex:(const void *)a0;
- (void)setBeveledAtIndex:(const void *)a0;
- (float)interceptValueForSeries:(id)a0;
- (float)maxValueForSeries:(long long)a0;
- (void)setExtrusionDetails:(const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } *)a0 forShape:(int)a1;

@end
