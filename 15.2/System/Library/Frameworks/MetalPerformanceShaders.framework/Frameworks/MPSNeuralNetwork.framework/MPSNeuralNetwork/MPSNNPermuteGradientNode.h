@interface MPSNNPermuteGradientNode : MPSNNGradientFilterNode

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;

- (void *)newFilterNode;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2;

@end
