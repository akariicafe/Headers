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
    struct array<TSCH3D::BarExtrusionDetails, 2UL> { struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float detail; float tension; float adaptiveThreshold; float creaseAngle; int crossType; } crossSection; struct BarExtrusionSpineDetails { float bevelHeight; long long bevelSlices; long long stride; float creaseAngle; } spine; } __elems_[2]; } _extrusionDetails;
    TSCH3DBarChartDefaultAppearance *_appearance;
    NSMutableArray *_rangeCache;
}

@property (retain, nonatomic) TSCH3DLabelResources *seriesLabels;
@property (readonly, nonatomic) id<TSCH3DBarChartAppearance> appearance;
@property (readonly, nonatomic) int barShape;
@property (readonly, nonatomic) BOOL hasBevelEdges;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)barWidth;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)updateLabels;
- (void)p_updateAppearance;
- (BOOL)beveledAtIndex:(const void *)a0;
- (void)calculateLayout;
- (void)createResources;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; })barElementInfoAtIndex:(const void *)a0;
- (id)boundsGeometryForSeries:(id)a0 index:(const void *)a1;
- (id)calculateInterceptForSeries:(id)a0;
- (float)chartInitialDepthOffset;
- (struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; } *)elementInfoAtIndex:(const void *)a0;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } *)extrusionDetailsForShape:(int)a0;
- (long long)flatIndex:(const void *)a0;
- (id)geometryForSeries:(id)a0 index:(const void *)a1;
- (float)interceptValueForSeries:(id)a0;
- (float)maxValueForSeries:(long long)a0;
- (id)normalsForSeries:(id)a0 index:(const void *)a1;
- (id)p_appearance;
- (id)p_appearanceClasses;
- (id)p_barResourceCacheItemAtIndex:(const void *)a0;
- (id)p_calculateRangeForSeries:(id)a0 index:(const void *)a1 intercept:(id)a2;
- (void)p_createAppearance;
- (void)p_resetExtrusionDetails;
- (void)p_updateRangeCache;
- (id)rangeForSeries:(id)a0 index:(const void *)a1;
- (void)releaseAndClearAppearance;
- (void)setBeveledAtIndex:(const void *)a0;
- (void)setElementInfo:(const struct BarElementInfo { BOOL x0; float x1; BOOL x2; unsigned long long x3; } *)a0 atIndex:(const void *)a1;
- (void)setExtrusionDetails:(const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } *)a0 forShape:(int)a1;
- (void)setMaxValueForSeries:(long long)a0 value:(float)a1;
- (id)texcoordsForSeries:(id)a0 index:(const void *)a1;
- (void)updateMaxValuesAndBevels;

@end
