@class TSCH3DResource, TSCH3DChartMeshSharedResource, TSUOnce, TSCH3DChartTexcoordSharedResource, TSCH3DGeometry, TSCH3DGeometryArrays, NSObject, TSCHChartSeries;
@protocol TSCH3DChartMeshCreator;

@interface TSCH3DChartMeshResources : NSObject {
    NSObject<TSCH3DChartMeshCreator> *_creator;
    TSCHChartSeries *_series;
    TSCH3DChartMeshSharedResource *_vertex;
    TSCH3DChartMeshSharedResource *_bounds;
    TSCH3DResource *_cachedBounds;
    TSUOnce *_cachedBoundsOnce;
    TSCH3DChartMeshSharedResource *_normal;
    TSCH3DChartTexcoordSharedResource *_texcoord;
    TSCH3DGeometryArrays *_arrays;
    TSCH3DGeometry *_geometry;
}

@property (readonly, nonatomic) TSCH3DResource *vertex;
@property (readonly, nonatomic) TSCH3DResource *bounds;
@property (readonly, nonatomic) TSCH3DResource *normal;
@property (readonly, nonatomic) TSCH3DResource *texcoord;

+ (id)resourcesWithSeries:(id)a0 creator:(id)a1;
+ (id)nullBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)regenerate;
- (id)geometryResourceWithPrimitiveType:(int)a0;
- (void)regenerateForChild:(id)a0;
- (id)initWithSeries:(id)a0 creator:(id)a1;
- (void)regenerateBounds;

@end
