@protocol MPSCNNConvolutionDataSource;

@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor

@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> recurrentWeights;

+ (id)createRNNSingleGateDescriptorWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;

- (id)init;
- (id)initWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;
- (void)dealloc;

@end
