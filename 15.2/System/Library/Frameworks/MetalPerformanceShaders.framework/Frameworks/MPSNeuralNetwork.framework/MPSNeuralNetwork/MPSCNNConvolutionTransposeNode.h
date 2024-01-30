@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode

@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;

+ (id)nodeWithSource:(id)a0 convolutionGradientState:(id)a1 weights:(id)a2;
+ (id)nodeWithSource:(id)a0 convolutionState:(id)a1 weights:(id)a2;

- (id)resultState;
- (void *)newFilterNode;
- (Class)gradientClass;
- (id)convolutionState;
- (id)initWithSource:(id)a0 convolutionGradientState:(id)a1 weights:(id)a2;
- (id)initWithSource:(id)a0 convolutionState:(id)a1 weights:(id)a2;

@end
