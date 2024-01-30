@interface MPSCNNDilatedPoolingMaxNode : MPSNNFilterNode {
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
}

@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;

+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1;
+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2 dilationRate:(unsigned long long)a3;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2 dilationRate:(unsigned long long)a3;
- (id)initWithSource:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4 dilationRateX:(unsigned long long)a5 dilationRateY:(unsigned long long)a6;

@end
