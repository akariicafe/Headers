@class MLCTrainingGraph, NSDictionary;

@interface TCModelTrainerBackendGraphsWithSplitLoss : TCModelTrainerBackendGraphs

@property (retain, nonatomic) MLCTrainingGraph *lossGraph;
@property (retain, nonatomic) NSDictionary *lossGraphInputs;
@property (retain, nonatomic) NSDictionary *lossGraphOutputs;

- (void).cxx_destruct;

@end
