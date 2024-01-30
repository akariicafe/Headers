@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode

@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 dilationRateX:(unsigned long long)a7 dilationRateY:(unsigned long long)a8;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 dilationRateX:(unsigned long long)a7 dilationRateY:(unsigned long long)a8;

@end
