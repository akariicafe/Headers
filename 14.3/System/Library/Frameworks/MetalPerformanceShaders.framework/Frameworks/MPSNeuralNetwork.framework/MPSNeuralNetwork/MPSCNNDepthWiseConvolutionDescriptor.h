@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor

@property (readonly, nonatomic) unsigned long long channelMultiplier;

- (id)init;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3;
- (id)debugDescription;

@end
