@protocol MPSCNNConvolutionDataSource;

@interface MPSGRUDescriptor : MPSRNNDescriptor

@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> recurrentGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> recurrentGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateInputGateWeights;
@property (nonatomic) float gatePnormValue;
@property (nonatomic) BOOL flipOutputGates;

+ (id)createGRUDescriptorWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;

@end
