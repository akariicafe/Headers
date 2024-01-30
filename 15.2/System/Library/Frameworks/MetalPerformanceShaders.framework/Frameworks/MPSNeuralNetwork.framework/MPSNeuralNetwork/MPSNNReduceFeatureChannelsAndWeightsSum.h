@interface MPSNNReduceFeatureChannelsAndWeightsSum : MPSNNReduceBinary

@property (readonly, nonatomic) BOOL doWeightedSumByNonZeroWeights;

- (id)initWithDevice:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 primaryOffset:(struct { long long x0; long long x1; long long x2; } *)a3 secondaryOffset:(struct { long long x0; long long x1; long long x2; } *)a4 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a5;
- (id)initWithDevice:(id)a0 doWeightedSumByNonZeroWeights:(BOOL)a1;

@end
