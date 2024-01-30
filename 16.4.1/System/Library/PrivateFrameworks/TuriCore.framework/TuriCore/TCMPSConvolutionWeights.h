@class NSString, MPSVector, MPSCNNConvolutionDescriptor, MPSCNNConvolutionWeightsAndBiasesState;
@protocol MTLCommandQueue, MTLBuffer, TCMPSConvolutionWeightsOptimizing;

@interface TCMPSConvolutionWeights : NSObject <MPSCNNConvolutionDataSource> {
    unsigned long long _outputFeatureChannels;
    unsigned long long _inputFeatureChannels;
    unsigned long long _kernelHeight;
    unsigned long long _kernelWidth;
    MPSCNNConvolutionDescriptor *_convDesc;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _kernelParamsBinaryName;
    unsigned long long sizeBias;
    unsigned long long sizeWeights;
    unsigned int _seed;
    struct OptimizerOptions { BOOL useSGD; float learningRate; float gradientClipping; float weightDecay; float sgdMomentum; float adamBeta1; float adamBeta2; float adamEpsilon; } _optimizerOptions;
    id<MTLBuffer> weightMomentumBuffer;
    id<MTLBuffer> biasMomentumBuffer;
    id<MTLBuffer> weightVelocityBuffer;
    id<MTLBuffer> biasVelocityBuffer;
    id<MTLBuffer> weightBuffer;
    id<MTLBuffer> biasBuffer;
    id<MTLCommandQueue> cq;
}

@property (readonly, nonatomic) id<TCMPSConvolutionWeightsOptimizing> optimizer;
@property (readonly, nonatomic) MPSVector *weightMomentumVector;
@property (readonly, nonatomic) MPSVector *weightVelocityVector;
@property (readonly, nonatomic) MPSVector *biasMomentumVector;
@property (readonly, nonatomic) MPSVector *biasVelocityVector;
@property (readonly, nonatomic) BOOL updateWeights;
@property (readonly, nonatomic) MPSCNNConvolutionWeightsAndBiasesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)descriptor;
- (void)checkpoint;
- (BOOL)load;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)dataType;
- (float *)biasTerms;
- (void *)weights;
- (id)label;
- (void).cxx_destruct;
- (void)setLearningRate:(float)a0;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1 sourceState:(id)a2;
- (void)checkpointWithCommandQueue:(id)a0;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1;
- (void)set_cq:(id)a0;
- (unsigned long long)biasSize;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronType:(int)a4 neuronA:(float)a5 neuronB:(float)a6 stride:(unsigned long long)a7 kernelParamsBinaryName:(const char *)a8 device:(id)a9 cmd_queue:(id)a10 init_weight_ptr:(float *)a11 init_bias_ptr:(float *)a12 optimizerOptions:(struct OptimizerOptions { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })a13;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronType:(int)a4 strideX:(unsigned long long)a5 strideY:(unsigned long long)a6 neuronA:(float)a7 neuronB:(float)a8 kernelParamsBinaryName:(const char *)a9 device:(id)a10 cmd_queue:(id)a11 init_weight_ptr:(float *)a12 init_bias_ptr:(float *)a13 optimizerOptions:(struct OptimizerOptions { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })a14;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronType:(int)a4 strideX:(unsigned long long)a5 strideY:(unsigned long long)a6 neuronA:(float)a7 neuronB:(float)a8 kernelParamsBinaryName:(const char *)a9 device:(id)a10 cmd_queue:(id)a11 updateWeights:(BOOL)a12 init_weight_ptr:(float *)a13 init_bias_ptr:(float *)a14 optimizerOptions:(struct OptimizerOptions { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })a15;
- (void)loadBias:(float *)a0;
- (void)loadWeight:(float *)a0;
- (id)weightShape;
- (unsigned long long)weightSize;

@end
