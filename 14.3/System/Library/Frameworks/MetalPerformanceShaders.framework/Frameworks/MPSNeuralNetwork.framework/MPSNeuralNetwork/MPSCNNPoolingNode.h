@interface MPSCNNPoolingNode : MPSNNFilterNode

@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;

+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1;
+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2;
- (id)initWithSource:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;

@end
