@class MLCTensorParameter, MLCTensor, MLCConvolutionDescriptor;

@interface MLCFullyConnectedLayer : MLCLayer

@property (readonly, nonatomic) int accumulatorPrecisionOption;
@property (readonly, copy, nonatomic) MLCConvolutionDescriptor *descriptor;
@property (readonly, retain, nonatomic) MLCTensor *weights;
@property (readonly, retain, nonatomic) MLCTensor *biases;
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter;
@property (readonly, retain, nonatomic) MLCTensorParameter *biasesParameter;

+ (id)layerWithWeights:(id)a0 biases:(id)a1 descriptor:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (id)summarizedDOTDescription;
- (void)linkAssociatedTensors;
- (void)unlinkAssociatedTensors;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)initWithWeights:(id)a0 biases:(id)a1 descriptor:(id)a2;

@end
