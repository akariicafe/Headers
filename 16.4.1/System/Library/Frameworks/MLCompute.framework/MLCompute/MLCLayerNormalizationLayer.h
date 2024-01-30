@class NSArray, MLCTensor, MLCTensorParameter;

@interface MLCLayerNormalizationLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *normalizedShape;
@property (readonly, retain, nonatomic) MLCTensor *beta;
@property (readonly, retain, nonatomic) MLCTensor *gamma;
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter;
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter;
@property (readonly, nonatomic) float varianceEpsilon;

+ (id)layerWithNormalizedShape:(id)a0 beta:(id)a1 gamma:(id)a2 varianceEpsilon:(float)a3;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithNormalizedShape:(id)a0 beta:(id)a1 gamma:(id)a2 varianceEpsilon:(float)a3;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (BOOL)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
