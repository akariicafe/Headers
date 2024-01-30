@interface MPSCNNLogSoftMaxGradientNode : MPSNNGradientFilterNode

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;
- (void *)newFilterNode;

@end
