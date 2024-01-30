@class MPSNNNeuronDescriptor;

@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) MPSNNNeuronDescriptor *descriptor;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 descriptor:(id)a3;

- (void)dealloc;
- (void *)newFilterNode;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 descriptor:(id)a3;
- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;

@end
