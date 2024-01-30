@interface MLNeuralNetworkMLComputeLayer : NSObject

+ (id)softmax;
+ (id)sigmoid;
+ (id)adamOptimizerWithLearningRate:(double)a0 beta1:(double)a1 beta2:(double)a2 epsilon:(double)a3 timeStep:(unsigned long long)a4;
+ (id)batchNormLayerWithFeatureChannels:(unsigned long long)a0 varianceEpsilon:(float)a1 gamma:(id)a2 beta:(id)a3 mean:(id)a4 variance:(id)a5;
+ (id)categoricalCrossEntropyLossWithNumberOfClasses:(unsigned long long)a0;
+ (id)concatNDLayerWithAxis:(unsigned long long)a0;
+ (id)convolutionalLayerWithKernelHeight:(unsigned long long)a0 kernelWidth:(unsigned long long)a1 inputChannels:(unsigned long long)a2 outputChannels:(unsigned long long)a3 strideInX:(unsigned long long)a4 strideInY:(unsigned long long)a5 dilationRateInX:(unsigned long long)a6 dilationRateInY:(unsigned long long)a7 nGroups:(unsigned long long)a8 weight:(id)a9 bias:(id)a10 paddingPolicy:(int)a11;
+ (id)fullyConnectedLayerWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputChannels:(unsigned long long)a2 outputChannels:(unsigned long long)a3 weight:(id)a4 bias:(id)a5;
+ (id)leakyRelu;
+ (id)matMulLayerWithTransposesX:(BOOL)a0 transposesY:(BOOL)a1;
+ (id)meanSquaredErrorLoss;
+ (id)poolingLayerWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 strideInX:(unsigned long long)a2 strideInY:(unsigned long long)a3 paddingPolicy:(int)a4 poolingType:(int)a5;
+ (id)relu;
+ (id)reluNLayerWithAlpha:(float)a0 beta:(float)a1;
+ (id)reshapeLayerWithChannelFirstOrderingAndTargetShape:(id)a0;
+ (id)sgdOptimizerWithLearningRate:(double)a0 momentum:(double)a1;
+ (id)transposeLayerWithAxes:(id)a0;
+ (id)uniDirectionalLSTMLayerWithInputSize:(unsigned long long)a0 outputSize:(unsigned long long)a1 inputWeightsData:(id)a2 recursionWeightsData:(id)a3 hasBias:(BOOL)a4 biasTermsData:(id)a5 sequenceOutput:(BOOL)a6 inputGateActivation:(id)a7 cellGateActivation:(id)a8 hiddenOutputActivation:(id)a9;

@end
