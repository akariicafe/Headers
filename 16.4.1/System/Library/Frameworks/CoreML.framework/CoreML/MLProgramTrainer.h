@class MLProgramEvaluator, MLProgramContext;
@protocol MLFeatureProvider, MLModeling, MLProgramInternal;

@interface MLProgramTrainer : NSObject

@property (retain, nonatomic) id<MLProgramInternal> program;
@property (retain, nonatomic) MLProgramContext *context;
@property (retain, nonatomic) MLProgramEvaluator *evaluator;
@property (retain, nonatomic) id<MLFeatureProvider> currentUpdatedWeights;
@property (nonatomic) double learningRate;
@property (readonly, copy) id<MLModeling> inferenceModel;

- (void).cxx_destruct;
- (id)attachLearningRateToFeatures:(id)a0;
- (id)copyCurrentTrainingDelta;
- (id)evaluateUsingTestData:(id)a0 error:(id *)a1;
- (id)evaluateUsingTestData:(id)a0 evaluationMetricNames:(id)a1 error:(id *)a2;
- (id)evaluateUsingTestData:(id)a0 evaluationMetricNames:(id)a1 evaluateOnTrainFunction:(BOOL)a2 error:(id *)a3;
- (id)flattenFeatures:(id)a0 orderedFeatures:(id)a1;
- (id)initWithProgram:(id)a0 learningRate:(double)a1 error:(id *)a2;
- (id)orderedTrainableWeightsNames;
- (id)trainUsingTrainingData:(id)a0 error:(id *)a1;
- (id)trainUsingTrainingData:(id)a0 evaluationMetricNames:(id)a1 error:(id *)a2;

@end
