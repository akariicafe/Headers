@class TSCH3DResource, TSCH3DChartMeshSharedResource, TSUOnce, TSCH3DChartTexcoordSharedResource, TSCH3DGeometry, TSCH3DGeometryArrays, NSObject, TSCHChartSeries;
@protocol TSCH3DChartMeshCreator;

@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent> {
    NSObject<TSCH3DChartMeshCreator> *mCreator;
    TSCHChartSeries *mSeries;
    TSCH3DChartMeshSharedResource *mVertex;
    TSCH3DChartMeshSharedResource *mBounds;
    TSCH3DResource *mCachedBounds;
    TSUOnce *mCachedBoundsOnce;
    TSCH3DChartMeshSharedResource *mNormal;
    TSCH3DChartTexcoordSharedResource *mTexcoord;
    TSCH3DGeometryArrays *mArrays;
    TSCH3DGeometry *mGeometry;
}

@property (readonly, nonatomic) TSCH3DResource *vertex;
@property (readonly, nonatomic) TSCH3DResource *bounds;
@property (readonly, nonatomic) TSCH3DResource *normal;
@property (readonly, nonatomic) TSCH3DResource *texcoord;

+ (id)resourcesWithSeries:(id)a0 creator:(id)a1;
+ (id)nullBuffer;

- (void)dealloc;
- (void)regenerate;
- (void)clearParent;
- (id)geometryResourceWithPrimitiveType:(int)a0;
- (void)regenerateForChild:(id)a0;
- (id)initWithSeries:(id)a0 creator:(id)a1;
- (void)regenerateBounds;

@end
