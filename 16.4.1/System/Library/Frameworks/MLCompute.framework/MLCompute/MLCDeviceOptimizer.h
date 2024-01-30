@class NSData, MLCOptimizerDescriptor;
@protocol MTLComputePipelineState, MTLBuffer;

@interface MLCDeviceOptimizer : NSObject <NSCopying>

@property (nonatomic) unsigned long long timeStep;
@property (readonly, retain, nonatomic) id kernel;
@property (retain, nonatomic) id<MTLComputePipelineState> computeL2NormKernel;
@property (retain, nonatomic) id<MTLComputePipelineState> sumL2NormKernel;
@property (retain, nonatomic) id<MTLBuffer> l2NormBuffer;
@property (nonatomic) int gpuOptimizerKernelType;
@property (nonatomic) float momentumScale;
@property (nonatomic) BOOL usesNesterov;
@property (nonatomic) float learningRate;
@property (retain, nonatomic) MLCOptimizerDescriptor *descriptor;
@property (nonatomic) float beta1;
@property (nonatomic) float beta2;
@property (nonatomic) float epsilon;
@property (nonatomic) BOOL amsgrad;
@property (nonatomic) BOOL decoupleWeightDecay;
@property (nonatomic) float alpha;
@property (nonatomic) BOOL centered;
@property (readonly, nonatomic) unsigned int function;
@property (readonly, retain, nonatomic) NSData *optimizerAlgFields;
@property (nonatomic) unsigned long long accumulatorBufferCount;

+ (id)deviceOptimizerWithFunction:(unsigned int)a0 optimizerAlgFields:(id)a1 accumulatorBufferCount:(unsigned long long)a2;
+ (id)deviceOptimizerWithKernel:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKernel:(id)a0;
- (id)initWithFunction:(unsigned int)a0 optimizerAlgFields:(id)a1 accumulatorBufferCount:(unsigned long long)a2;

@end
