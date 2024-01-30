@class NSArray, NSMutableDictionary, NSMutableArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_nodes;
    struct GKCGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; } *_cGraph;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_info;
@property (readonly, nonatomic) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNodes:(id)a0;
- (void)dealloc;
- (void)removeNodes:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (struct GKCGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; } *)cGraph;
- (void)encodeWithCoder:(id)a0;
- (void)addNodes:(id)a0;
- (struct GKCGraph { void /* function */ **x0; struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; struct GKCGraphNode **x1; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode **x0; } x2; } x1; id x2; } *)makeCGraph;
- (id)nodesMut;
- (void)connectNodeToLowestCostNode:(id)a0 bidirectional:(BOOL)a1;
- (id)findPathFromNode:(id)a0 toNode:(id)a1;

@end
