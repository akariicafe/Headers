@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {
    NSMutableArray *_connectedNodes;
    struct GKCGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; } *_cGraphNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *connectedNodes;

+ (id)node;

- (void)removeConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (float)costToNode:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (struct GKCGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; } *)cGraphNode;
- (id)findPathToNode:(id)a0;
- (void)deleteCGraphNode;
- (struct GKCGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; } *)makeCGraphNode;
- (id)findPathFromNode:(id)a0;
- (void)addConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (id)mutConnectedNodes;
- (void)addConnection:(id)a0 bidirectional:(BOOL)a1;
- (void)removeConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;

@end
