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
+ (id)graphWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2;
+ (id)graphWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2 nodeClass:(Class)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)nodeClass;
- (void)triangulate;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (void)addObstacles:(id)a0;
- (void *)cMeshGraph;
- (void)connectNodeUsingObstacles:(id)a0;
- (id)initWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2;
- (id)initWithBufferRadius:(id)a0 minCoordinate:(SEL)a1 maxCoordinate:(float)a2 nodeClass:(Class)a3;
- (void *)makeCGraph;
- (BOOL)makeNodesFromTriangleCenters;
- (BOOL)makeNodesFromTriangleEdgeMidpoints;
- (BOOL)makeNodesFromTriangleVertices;
- (void)removeObstacles:(id)a0;
- (void)setMakeNodesFromTriangleCenters:(BOOL)a0;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)a0;
- (void)setMakeNodesFromTriangleVertices:(BOOL)a0;
- (struct GKTriangle { void /* unknown type, empty encoding */ x0[3]; })triangleAtIndex:(unsigned long long)a0;

@end
