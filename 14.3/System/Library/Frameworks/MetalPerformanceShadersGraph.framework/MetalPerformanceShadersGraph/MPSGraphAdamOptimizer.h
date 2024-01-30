@class MPSGraphVariableOp, MPSGraphTensor;

@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {
    MPSGraphTensor *_beta1Tensor;
    MPSGraphTensor *_beta2Tensor;
    MPSGraphTensor *_epsilonTensor;
    MPSGraphVariableOp *_iterationsVariable;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 learningRateTensor:(id)a1 trainableVariables:(id)a2 variablesToGradientTensorMap:(id)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 trainableVariables:(id)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 learningRateTensor:(id)a1 beta1:(float)a2 beta2:(float)a3 epsilon:(float)a4 iterations:(unsigned long long)a5 trainableVariables:(id)a6 variablesToGradientTensorMap:(id)a7 name:(id)a8;
- (id)initWithGraph:(id)a0 lossTensor:(id)a1 learningRateTensor:(id)a2 beta1:(float)a3 beta2:(float)a4 epsilon:(float)a5 iterations:(unsigned long long)a6 trainableVariables:(id)a7 name:(id)a8;

@end
