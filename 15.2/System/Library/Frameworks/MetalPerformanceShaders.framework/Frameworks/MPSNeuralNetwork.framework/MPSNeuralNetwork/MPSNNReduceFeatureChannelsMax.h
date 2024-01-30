@interface MPSNNReduceFeatureChannelsMax : MPSNNReduceUnary

- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;

@end
