@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) float keepProbability;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } maskStrideInPixels;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 keepProbability:(float)a3 seed:(unsigned long long)a4 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 keepProbability:(float)a3 seed:(unsigned long long)a4 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;

@end
