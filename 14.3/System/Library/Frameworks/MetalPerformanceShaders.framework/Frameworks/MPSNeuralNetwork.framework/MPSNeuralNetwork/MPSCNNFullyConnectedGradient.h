@interface MPSCNNFullyConnectedGradient : MPSCNNConvolutionGradient

- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 primaryOffset:(struct { long long x0; long long x1; long long x2; } *)a3 secondaryOffset:(struct { long long x0; long long x1; long long x2; } *)a4 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a5;
- (void)dealloc;
- (id)initWithDevice:(id)a0 weights:(id)a1 convolutionTranspose:(BOOL)a2;
- (id)initWithDevice:(id)a0 weights:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;

@end
