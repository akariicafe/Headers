@class NSArray, MLCMultiheadAttentionDescriptor;

@interface MLCMultiheadAttentionLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCMultiheadAttentionDescriptor *descriptor;
@property (readonly, retain, nonatomic) NSArray *weights;
@property (readonly, retain, nonatomic) NSArray *biases;
@property (readonly, retain, nonatomic) NSArray *attentionBiases;
@property (readonly, retain, nonatomic) NSArray *weightsParameters;
@property (readonly, retain, nonatomic) NSArray *biasesParameters;

+ (id)layerWithDescriptor:(id)a0 weights:(id)a1 biases:(id)a2 attentionBiases:(id)a3;

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
- (void)allocateGradientsForParameters;
- (id)initWithDescriptor:(id)a0 weights:(id)a1 bias:(id)a2 attentionBias:(id)a3;

@end
