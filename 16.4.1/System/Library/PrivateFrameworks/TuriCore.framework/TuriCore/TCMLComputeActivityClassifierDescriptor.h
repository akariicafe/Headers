@class NSDictionary, MLCTensor;

@interface TCMLComputeActivityClassifierDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (retain, nonatomic) NSDictionary *weights;
@property (retain, nonatomic) MLCTensor *outputTensor;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)addBatchNormLayerWithSource:(id)a0 graph:(id)a1;
- (id)addConvLayerWithOutputChannels:(unsigned long long)a0 source:(id)a1 graph:(id)a2;
- (id)addDenseLayerWithIndex:(unsigned long long)a0 outputChannels:(unsigned long long)a1 source:(id)a2 graph:(id)a3;
- (id)addLSTMLayerWithInputSize:(unsigned long long)a0 outputSize:(unsigned long long)a1 source:(id)a2 graph:(id)a3;

@end
