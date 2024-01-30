@class NSArray, NSMutableArray;

@interface GKObstacleGraph : GKGraph {
    NSMutableArray *_sourceObstacles;
    void *_cObstacleGraph;
    Class _nodeClass;
}

@property (readonly, nonatomic) NSArray *obstacles;
@property (readonly, nonatomic) float bufferRadius;

+ (BOOL)supportsSecureCoding;
+ (id)graphWithObstacles:(id)a0 bufferRadius:(float)a1;
+ (id)graphWithObstacles:(id)a0 bufferRadius:(float)a1 nodeClass:(Class)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)nodeClass;
- (void *)makeCGraph;
- (void)addObstacles:(id)a0;
- (void)removeObstacles:(id)a0;
- (void)connectNodeUsingObstacles:(id)a0;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (id)mutObstacles;
- (id)initWithObstacles:(id)a0 bufferRadius:(float)a1;
- (id)initWithObstacles:(id)a0 bufferRadius:(float)a1 nodeClass:(Class)a2;
- (void *)cObstacleGraph;
- (void)connectNodeUsingObstacles:(id)a0 ignoringObstacles:(id)a1;
- (void)connectNodeUsingObstacles:(id)a0 ignoringBufferRadiusOfObstacles:(id)a1;
- (void)removeAllObstacles;
- (id)nodesForObstacle:(id)a0;
- (void)lockConnectionFromNode:(id)a0 toNode:(id)a1;
- (void)unlockConnectionFromNode:(id)a0 toNode:(id)a1;
- (BOOL)isConnectionLockedFromNode:(id)a0 toNode:(id)a1;

@end
