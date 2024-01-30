@class MLCTensorParameter, MLCEmbeddingDescriptor, MLCTensor;

@interface MLCEmbeddingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCEmbeddingDescriptor *descriptor;
@property (readonly, retain, nonatomic) MLCTensor *weights;
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter;

+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;
+ (id)layerWithDescriptor:(id)a0 weights:(id)a1;

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
- (id)initWithDescriptor:(id)a0 weight:(id)a1;

@end
