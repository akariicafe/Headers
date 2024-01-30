@class MLCTensor, MLCTensorParameter;

@interface MLCInstanceNormalizationLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long featureChannelCount;
@property (readonly, retain, nonatomic) MLCTensor *mean;
@property (readonly, retain, nonatomic) MLCTensor *variance;
@property (readonly, retain, nonatomic) MLCTensor *beta;
@property (readonly, retain, nonatomic) MLCTensor *gamma;
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter;
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter;
@property (readonly, nonatomic) float varianceEpsilon;
@property (readonly, nonatomic) float momentum;

+ (id)layerWithFeatureChannelCount:(unsigned long long)a0 beta:(id)a1 gamma:(id)a2 varianceEpsilon:(float)a3;
+ (id)layerWithFeatureChannelCount:(unsigned long long)a0 beta:(id)a1 gamma:(id)a2 varianceEpsilon:(float)a3 momentum:(float)a4;
+ (id)layerWithFeatureChannelCount:(unsigned long long)a0 mean:(id)a1 variance:(id)a2 beta:(id)a3 gamma:(id)a4 varianceEpsilon:(float)a5 momentum:(float)a6;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (BOOL)allocateDataForOptimizer:(id)a0;
- (unsigned long long)allocatedDataSizeForTraining:(BOOL)a0 optimizer:(id)a1;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithFeatureChannelCount:(unsigned long long)a0 mean:(id)a1 variance:(id)a2 beta:(id)a3 gamma:(id)a4 varianceEpsilon:(float)a5 momentum:(float)a6;
- (BOOL)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
