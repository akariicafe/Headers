@class MLCTensor, MLCTensorParameter;

@interface MLCGroupNormalizationLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long featureChannelCount;
@property (readonly, nonatomic) unsigned long long groupCount;
@property (readonly, retain, nonatomic) MLCTensor *beta;
@property (readonly, retain, nonatomic) MLCTensor *gamma;
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter;
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter;
@property (readonly, nonatomic) float varianceEpsilon;

+ (id)layerWithFeatureChannelCount:(unsigned long long)a0 groupCount:(unsigned long long)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithFeatureChannelCount:(unsigned long long)a0 groupCount:(unsigned long long)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (BOOL)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
