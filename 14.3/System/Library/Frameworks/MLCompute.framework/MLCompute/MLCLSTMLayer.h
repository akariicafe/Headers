@class NSArray, MLCLSTMDescriptor, MLCActivationDescriptor;

@interface MLCLSTMLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCLSTMDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSArray *gateActivations;
@property (readonly, copy, nonatomic) MLCActivationDescriptor *outputResultActivation;
@property (readonly, retain, nonatomic) NSArray *inputWeights;
@property (readonly, retain, nonatomic) NSArray *hiddenWeights;
@property (readonly, retain, nonatomic) NSArray *peepholeWeights;
@property (readonly, retain, nonatomic) NSArray *biases;
@property (readonly, retain, nonatomic) NSArray *inputWeightsParameters;
@property (readonly, retain, nonatomic) NSArray *hiddenWeightsParameters;
@property (readonly, retain, nonatomic) NSArray *peepholeWeightsParameters;
@property (readonly, retain, nonatomic) NSArray *biasesParameters;

+ (id)layerWithDescriptor:(id)a0 inputWeights:(id)a1 hiddenWeights:(id)a2 peepholeWeights:(id)a3 biases:(id)a4 gateActivations:(id)a5 outputResultActivation:(id)a6;
+ (id)layerWithDescriptor:(id)a0 inputWeights:(id)a1 hiddenWeights:(id)a2 peepholeWeights:(id)a3 biases:(id)a4;
+ (id)layerWithDescriptor:(id)a0 inputWeights:(id)a1 hiddenWeights:(id)a2 biases:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (id)summarizedDOTDescription;
- (void)linkAssociatedTensors;
- (void)unlinkAssociatedTensors;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)resultStateTensorWithSources:(id)a0;
- (id)initWithDescriptor:(id)a0 inputWeights:(id)a1 hiddenWeights:(id)a2 peepholeWeights:(id)a3 biases:(id)a4 gateActivations:(id)a5 outputResultActivation:(id)a6;

@end
