@class NSString;

@interface MLBayesianProbitRegression : MLRegressor <MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver> {
    struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { struct BayesianProbitRegression *__ptr_; struct __shared_weak_count *__cntrl_; } _model;
    NSString *_regressionInputFeatureName;
    NSString *_optimismInputFeatureName;
    NSString *_meanOutputFeatureName;
    NSString *_varianceOutputFeatureName;
    NSString *_pessimisticProbabilityOutputFeatureName;
    NSString *_sampledProbabilityOutputFeatureName;
    NSString *_samplingScaleInputFeatureName;
    NSString *_samplingTruncationInputFeatureName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)validateModelDescription:(id)a0;
+ (BOOL)setFeatureName:(id *)a0 to:(id)a1 descriptions:(id)a2;

- (id)initWithDescription:(id)a0 numberOfFeatures:(long long)a1 priorMean:(id)a2 regressionInputName:(id)a3 optimismInputName:(id)a4 samplingScaleInputName:(id)a5 samplingTruncationInputName:(id)a6 meanOutputName:(id)a7 varianceOutputName:(id)a8 pessimisticProbabilityOutputName:(id)a9 sampledProbabilityOutputName:(id)a10;
- (struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { struct BayesianProbitRegression *x0; struct __shared_weak_count *x1; })model;
- (void).cxx_destruct;
- (void)reset;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
- (struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)saveModelToSpecification:(id *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)FeatureCount;
- (double)getOptimism:(id)a0;
- (BOOL)updateModelFromFeatures:(id)a0 toTarget:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)setInputFeatureName:(id *)a0 to:(id)a1;
- (BOOL)setOutputFeatureName:(id *)a0 to:(id)a1;
- (BOOL)setFeatureCount:(unsigned long long)a0;
- (id)initWithDescription:(id)a0 numberOfFeatures:(long long)a1 priorMean:(id)a2;
- (id)getArrayFeatureValue:(id)a0;
- (double)getSamplingScale:(id)a0;
- (struct shared_ptr<CoreML::BayesianProbitRegression::FeatureValues> { struct FeatureValues *x0; struct __shared_weak_count *x1; })getOneHotFeatureValues:(id)a0 error:(id *)a1;
- (id)createRegressorResult:(struct Prediction { double x0; double x1; double x2; double x3; double x4; BOOL x5; } *)a0;
- (double)getFeatureValue:(id)a0 forName:(id)a1 withType:(long long)a2;
- (double)getSamplingTruncation:(id)a0;
- (BOOL)convertOutputFeatureToPredictionValues:(id)a0 event:(BOOL *)a1 importance:(double *)a2 error:(id *)a3;
- (BOOL)isEqualToBopr:(id)a0;
- (BOOL)updateModelFromFeatures:(id)a0 toTarget:(id)a1 error:(id *)a2;
- (void)createCheckpoint;
- (void)resetToLastCheckpointBeforeDate:(id)a0;

@end
