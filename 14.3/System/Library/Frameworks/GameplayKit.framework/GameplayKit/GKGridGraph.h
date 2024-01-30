@interface GKGridGraph : GKGraph {
    struct GKCGridGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; unsigned int x3; unsigned int x4; BOOL x5; struct vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode **x0; struct GKCGridGraphNode **x1; struct __compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode **x0; } x2; } x6; Class x7; id x8; } *_cGridGraph;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ gridOrigin;
@property (readonly, nonatomic) unsigned long long gridWidth;
@property (readonly, nonatomic) unsigned long long gridHeight;
@property (readonly, nonatomic) BOOL diagonalsAllowed;

+ (BOOL)supportsSecureCoding;
+ (id)graphFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3;
+ (id)graphFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3 nodeClass:(Class)a4;

- (void)removeNodes:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct GKCGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; } *)makeCGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (id)initFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3;
- (id)initFromGridStartingAt:(SEL)a0 width:(int)a1 height:(int)a2 diagonalsAllowed:(BOOL)a3 nodeClass:(Class)a4;
- (struct GKCGridGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; unsigned int x3; unsigned int x4; BOOL x5; struct vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode **x0; struct GKCGridGraphNode **x1; struct __compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode **x0; } x2; } x6; Class x7; id x8; } *)cGridGraph;
- (id)nodeAtGridPosition:(SEL)a0;
- (id)nodeAtGridPositionNoNilCheck:(SEL)a0;
- (void)connectNodeToAdjacentNodes:(id)a0;

@end
