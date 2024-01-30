@class NSString, MPSCNNConvolutionStateNode, MPSCNNConvolutionGradientStateNode;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionNode : MPSNNFilterNode <MPSNNTrainableNode>

@property (readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
@property (readonly, nonatomic) id<MPSCNNConvolutionDataSource> weights;
@property (nonatomic) unsigned long long trainingStyle;
@property (nonatomic) unsigned long long accumulatorPrecision;
@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSource:(id)a0 weights:(id)a1;

- (void)dealloc;
- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (Class)gradientClass;
- (id)resultState;
- (id)initWithSource:(id)a0 weights:(id)a1;
- (id)initWithSource:(id)a0 weights:(id)a1 state:(id)a2;

@end
