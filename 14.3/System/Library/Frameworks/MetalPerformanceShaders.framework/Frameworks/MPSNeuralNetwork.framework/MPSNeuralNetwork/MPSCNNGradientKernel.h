@interface MPSCNNGradientKernel : MPSCNNBinaryKernel

@property (nonatomic) long long kernelOffsetX;
@property (nonatomic) long long kernelOffsetY;

- (id)initWithDevice:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1;
- (void)readBinaryGradientState:(id)a0 isSecondarySourceFilter:(BOOL)a1;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceGradients:(id)a1 sourceImages:(id)a2 gradientStates:(id)a3 destinationGradients:(id)a4;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceGradients:(id)a1 sourceImages:(id)a2 gradientStates:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceGradient:(id)a1 sourceImage:(id)a2 gradientState:(id)a3 destinationGradient:(id)a4;
- (id)encodeToCommandBuffer:(id)a0 sourceGradient:(id)a1 sourceImage:(id)a2 gradientState:(id)a3;
- (BOOL)isStateModified;
- (id)resultStateForPrimaryImage:(id)a0 secondaryImage:(id)a1 sourceStates:(id)a2;
- (void)readGradientState:(id)a0;
- (id)temporaryResultStateForCommandBuffer:(id)a0 primaryImage:(id)a1 secondaryImage:(id)a2 sourceStates:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
