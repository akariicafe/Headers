@class NSMutableArray;

@interface MLCRNNGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSMutableArray *rnnTrainableWeights;
@property (retain, nonatomic) NSMutableArray *rnnTrainableWeightGradients;
@property (retain, nonatomic) NSMutableArray *rnnTrainableStates;
@property (retain, nonatomic) NSMutableArray *rnnBuffers;
@property (retain, nonatomic) NSMutableArray *rnnExportedWeightMatrices;
@property (retain, nonatomic) NSMutableArray *rnnExportedBiasTerms;
@property (retain, nonatomic) NSMutableArray *rnnStackedLayersResults;
@property (retain, nonatomic) NSMutableArray *rnnStackedLayersBufferResults;
@property (retain, nonatomic) NSMutableArray *rnnExportedInputWeightGradientMatrices;
@property (retain, nonatomic) NSMutableArray *rnnExportedHiddenWeightGradientMatrices;
@property (retain, nonatomic) NSMutableArray *rnnExportedBiasGradientMatrices;
@property (retain, nonatomic) NSMutableArray *rnnMomentumMatrices;
@property (retain, nonatomic) NSMutableArray *rnnVelocityMatrices;
@property (retain, nonatomic) NSMutableArray *rnnCenterWeightMatrices;
@property (nonatomic) BOOL isBidirectional;
@property (nonatomic) BOOL batchFirst;
@property (nonatomic) BOOL returnsSequences;
@property (nonatomic) unsigned long long hiddenSize;
@property (nonatomic) unsigned long long inputSize;
@property (nonatomic) unsigned long long numLayers;
@property (nonatomic) float lstmDropout;
@property (retain, nonatomic) id forwardTimeGradientResult;
@property (retain, nonatomic) id reverseTimeGradientResult;
@property (retain, nonatomic) id biDirectionalGradientResult;
@property (retain, nonatomic) id biDirectionalSumKernel;
@property (retain, nonatomic) NSMutableArray *lstmDropoutForwardKernel;
@property (retain, nonatomic) NSMutableArray *lstmDropoutGradientKernel;
@property (retain, nonatomic) NSMutableArray *lstmDropoutSource;
@property (retain, nonatomic) NSMutableArray *lstmDropoutState;
@property (retain, nonatomic) NSMutableArray *auxiliaryWeightsMemory;
@property (retain, nonatomic) NSMutableArray *auxiliaryMomentumMemory;
@property (retain, nonatomic) NSMutableArray *auxiliaryVelocityMemory;
@property (retain, nonatomic) NSMutableArray *auxiliaryCenterWeightMemory;
@property (retain, nonatomic) id lstmMultiGPUChildOps;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
