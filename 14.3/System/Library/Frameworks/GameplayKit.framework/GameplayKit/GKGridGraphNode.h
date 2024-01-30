@interface GKGridGraphNode : GKGraphNode {
    struct GKCGridGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; id x6; } *_cGridGraphNode;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ gridPosition;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithGridPosition:(SEL)a0;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (float)costToNode:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (struct GKCGridGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; id x6; } *)cGridGraphNode;
- (void)deleteCGraphNode;
- (struct GKCGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; } *)makeCGraphNode;
- (id)initWithGridPosition:(SEL)a0;

@end
