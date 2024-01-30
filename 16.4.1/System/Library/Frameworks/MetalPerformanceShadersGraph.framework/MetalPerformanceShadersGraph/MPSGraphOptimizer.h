@class NSArray, NSDictionary, MPSGraphTensor, MPSGraph, NSString;

@interface MPSGraphOptimizer : NSObject {
    MPSGraph *_graph;
    NSArray *_trainableVariables;
    NSString *_name;
}

@property (readonly, nonatomic) NSArray *updateOperations;
@property (readonly, nonatomic) NSDictionary *variablesToGradientTensorMap;
@property (readonly, nonatomic) NSDictionary *variablesToUpdateOpMap;
@property (readonly, nonatomic) MPSGraphTensor *learningRateTensor;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 learningRateTensor:(id)a1 trainableVariables:(id)a2 variablesToGradientTensorMap:(id)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 trainableVariables:(id)a3 name:(id)a4;

@end
