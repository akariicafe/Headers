@interface MPSCNNBinaryFullyConnectedNode : MPSCNNBinaryConvolutionNode

+ (id)nodeWithSource:(id)a0 weights:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;
+ (id)nodeWithSource:(id)a0 weights:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;

- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (id)initWithSource:(id)a0 weights:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;
- (id)initWithSource:(id)a0 weights:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;

@end
