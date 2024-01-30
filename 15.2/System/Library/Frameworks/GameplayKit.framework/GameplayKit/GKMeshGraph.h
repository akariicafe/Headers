@class NSArray, NSMutableArray;

@interface GKMeshGraph : GKGraph {
    NSMutableArray *_sourceObstacles;
    void *_cMeshGraph;
    Class _nodeClass;
}

@property (readonly, nonatomic) NSArray *obstacles;
@property (readonly, nonatomic) float bufferRadius;
@property (nonatomic) unsigned long long triangulationMode;
@property (readonly, nonatomic) unsigned long long triangleCount;

+ (BOOL)supportsSecureCoding;
+ (id)graphWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2 nodeClass:(Class)a3;
+ (id)graphWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)nodeClass;
- (id)initWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2 nodeClass:(Class)a3;
- (void *)makeCGraph;
- (void *)cMeshGraph;
- (void)setMakeNodesFromTriangleCenters:(BOOL)a0;
- (BOOL)makeNodesFromTriangleCenters;
- (void)setMakeNodesFromTriangleVertices:(BOOL)a0;
- (BOOL)makeNodesFromTriangleVertices;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)a0;
- (BOOL)makeNodesFromTriangleEdgeMidpoints;
- (id)initWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2;
- (void)addObstacles:(id)a0;
- (void)removeObstacles:(id)a0;
- (void)connectNodeUsingObstacles:(id)a0;
- (void)triangulate;
- (struct GKTriangle { void /* unknown type, empty encoding */ x0[3]; })triangleAtIndex:(unsigned long long)a0;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;

@end
