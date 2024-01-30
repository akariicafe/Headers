@interface MPSNNPermuteNode : MPSNNFilterNode {
    struct MPSNNDimensionOrder { unsigned long long dimensions[4]; } _order;
}

+ (id)nodeWithSource:(id)a0 dimensionOrder:(struct MPSNNDimensionOrder { unsigned long long x0[4]; })a1;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 dimensionOrder:(struct MPSNNDimensionOrder { unsigned long long x0[4]; })a1;

@end
