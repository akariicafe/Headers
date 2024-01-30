@interface MPSNNGradientFilterNode : MPSNNFilterNode

- (id)initWithGradientImages:(id)a0 sourceImages:(id)a1 gradientState:(id)a2 paddingPolicy:(id)a3;
- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithGradientImages:(id)a0 sourceImages:(id)a1 binaryGradientState:(id)a2 paddingPolicy:(id)a3;
- (id)resultState;
- (id)resultStates;

@end
