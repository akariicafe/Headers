@protocol MPSCNNConvolutionDataSource;

@interface MPSLSTMDescriptor : MPSRNNDescriptor

@property (nonatomic) float cellClipThreshold;
@property (nonatomic) BOOL coupleForgetGateToInputGate;
@property (nonatomic) BOOL memoryWeightsAreDiagonal;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> inputGateMemoryWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> forgetGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> forgetGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> forgetGateMemoryWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> outputGateMemoryWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> cellGateInputWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> cellGateRecurrentWeights;
@property (retain, nonatomic) id<MPSCNNConvolutionDataSource> cellGateMemoryWeights;
@property (nonatomic) int cellToOutputNeuronType;
@property (nonatomic) float cellToOutputNeuronParamA;
@property (nonatomic) float cellToOutputNeuronParamB;
@property (nonatomic) float cellToOutputNeuronParamC;

+ (id)createLSTMDescriptorWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)a0 outputFeatureChannels:(unsigned long long)a1;

@end
