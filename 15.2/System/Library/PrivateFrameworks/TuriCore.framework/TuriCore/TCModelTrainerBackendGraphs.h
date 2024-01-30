@class MLCTrainingGraph, NSDictionary, MLCInferenceGraph;

@interface TCModelTrainerBackendGraphs : NSObject

@property (retain, nonatomic) MLCTrainingGraph *trainingGraph;
@property (retain, nonatomic) NSDictionary *trainingInputs;
@property (retain, nonatomic) NSDictionary *trainingLossLabels;
@property (retain, nonatomic) NSDictionary *trainingLossLabelWeights;
@property (retain, nonatomic) NSDictionary *trainingOutputs;
@property (retain, nonatomic) MLCInferenceGraph *inferenceGraph;
@property (retain, nonatomic) NSDictionary *inferenceInputs;
@property (retain, nonatomic) NSDictionary *inferenceOutputs;
@property (retain, nonatomic) NSDictionary *layerWeights;

- (void).cxx_destruct;

@end
