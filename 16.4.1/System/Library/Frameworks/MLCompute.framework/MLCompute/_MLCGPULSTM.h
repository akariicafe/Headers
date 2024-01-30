@interface _MLCGPULSTM : _MLCGPULayer

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (id)layerWithDevice:(id)a0 descriptor:(id)a1 inputWeights:(id)a2 hiddenWeights:(id)a3 peepholeWeights:(id)a4 biasTerms:(id)a5 gateActivations:(id)a6 outputResultActivation:(id)a7 inferenceOnly:(BOOL)a8;
+ (void)setBiasOptimizerDataForMomentumMatrices:(id)a0 velocityMatrices:(id)a1 centerWeightMatrices:(id)a2 momentumArray:(id)a3 velocityArray:(id)a4 centerWeightArray:(id)a5 accumulatorIndex:(unsigned long long)a6 matrixId:(unsigned long long)a7 bias:(id)a8 device:(id)a9 deviceOps:(id)a10 deviceNumber:(unsigned long long)a11 lstmNumber:(unsigned long long)a12;
+ (BOOL)setOptimizerDataForDevice:(id)a0 deviceOps:(id)a1 inputWeights:(id)a2 hiddenWeights:(id)a3 biasTerms:(id)a4;
+ (void)setOptimizerDataForMomentumMatrices:(id)a0 velocityMatrices:(id)a1 centerWeightMatrices:(id)a2 momentumArray:(id)a3 velocityArray:(id)a4 centerWeightArray:(id)a5 accumulatorIndex:(unsigned long long)a6 matrixId:(unsigned long long)a7 weight:(id)a8 device:(id)a9 deviceOps:(id)a10 deviceNumber:(unsigned long long)a11 lstmNumber:(unsigned long long)a12 isRecurrent:(BOOL)a13;

- (id)initWithDevice:(id)a0 descriptor:(id)a1 inputWeights:(id)a2 hiddenWeights:(id)a3 peepholeWeights:(id)a4 biasTerms:(id)a5 gateActivations:(id)a6 outputResultActivation:(id)a7 inferenceOnly:(BOOL)a8;

@end
