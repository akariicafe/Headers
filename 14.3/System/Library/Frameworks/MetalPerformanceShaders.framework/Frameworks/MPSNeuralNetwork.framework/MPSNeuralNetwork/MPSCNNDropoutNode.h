@interface MPSCNNDropoutNode : MPSNNFilterNode

@property (readonly, nonatomic) float keepProbability;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } maskStrideInPixels;

+ (id)nodeWithSource:(id)a0;
+ (id)nodeWithSource:(id)a0 keepProbability:(float)a1;
+ (id)nodeWithSource:(id)a0 keepProbability:(float)a1 seed:(unsigned long long)a2 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;

- (id)initWithSource:(id)a0;
- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 keepProbability:(float)a1;
- (id)initWithSource:(id)a0 keepProbability:(float)a1 seed:(unsigned long long)a2 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;

@end
