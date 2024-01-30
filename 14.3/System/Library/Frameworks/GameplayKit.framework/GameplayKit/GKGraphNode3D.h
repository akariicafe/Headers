@interface GKGraphNode3D : GKGraphNode {
    struct GKCGraphNode3D { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; id x6; } *_cGraphNode3D;
}

@property (nonatomic) void /* unknown type, empty encoding */ position;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithPoint:(SEL)a0;

- (id)init;
- (id)initWithPoint:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (float)costToNode:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (void)deleteCGraphNode;
- (struct GKCGraphNode { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; } *)makeCGraphNode;
- (struct GKCGraphNode3D { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; struct GKCPolygonObstacle *x2; struct GKCPolygonObstacle *x3; int x4; id x5; id x6; } *)cGraphNode3D;

@end
