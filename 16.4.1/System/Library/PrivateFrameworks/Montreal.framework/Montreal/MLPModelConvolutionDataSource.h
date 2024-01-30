@class MPSCNNConvolutionWeightsAndBiasesState, NSString, MPSVector, MPSCNNConvolutionDescriptor, MLPDeviceHandler, NSData, MPSNNOptimizerAdam;
@protocol MTLBuffer;

@interface MLPModelConvolutionDataSource : NSObject <MPSCNNConvolutionDataSource>

@property (readonly, nonatomic) MPSNNOptimizerAdam *optimizer;
@property (readonly, nonatomic) MPSVector *weightMomentumVector;
@property (readonly, nonatomic) MPSVector *weightVelocityVector;
@property (readonly, nonatomic) MPSVector *biasMomentumVector;
@property (readonly, nonatomic) MPSVector *biasVelocityVector;
@property (readonly) unsigned long long outputFeatureChannels;
@property (readonly) unsigned long long inputFeatureChannels;
@property (readonly) unsigned long long kernelHeight;
@property (readonly) unsigned long long kernelWidth;
@property (readonly) MPSCNNConvolutionDescriptor *convDesc;
@property (readonly) NSString *kernelParamsBinaryName;
@property (readonly) unsigned long long sizeBias;
@property (readonly) unsigned long long sizeWeights;
@property (readonly) unsigned int seed;
@property (readonly) struct MLPModelOptimizerOptions { float adamBeta1; float adamBeta2; float adamEpsilon; float learningRate; } optimizerOptions;
@property (readonly) id<MTLBuffer> weightBuffer;
@property (readonly) id<MTLBuffer> biasBuffer;
@property (readonly) MLPDeviceHandler *deviceHandler;
@property (readonly) NSData *weightsInWHIOOrder;
@property const void *initialWeights;
@property const void *initialBias;
@property (readonly, nonatomic) MPSCNNConvolutionWeightsAndBiasesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)descriptor;
- (BOOL)load;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)dataType;
- (float *)biasTerms;
- (void *)weights;
- (id)label;
- (void).cxx_destruct;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1 sourceState:(id)a2;
- (unsigned long long)bias_size;
- (void)bootstrapBias:(id *)a0 length:(unsigned long long)a1 device:(id)a2 stdDev:(float)a3 values:(const void *)a4;
- (void)bootstrapBuffer:(id)a0 length:(unsigned long long)a1 device:(id)a2 stdDev:(float)a3;
- (void)bootstrapWeights:(id *)a0 length:(unsigned long long)a1 device:(id)a2 stdDev:(float)a3 values:(const void *)a4;
- (void)checkpointWithCommandQueue:(id)a0;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 stride:(unsigned long long)a4 kernelParamsBinaryName:(id)a5 initialWeights:(const void *)a6 initialBias:(const void *)a7 deviceHandler:(id)a8 optimizerOptions:(struct MLPModelOptimizerOptions { float x0; float x1; float x2; float x3; })a9;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1;
- (unsigned long long)weight_size;

@end
