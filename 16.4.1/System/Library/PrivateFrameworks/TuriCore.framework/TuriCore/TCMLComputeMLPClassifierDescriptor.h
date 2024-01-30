@class NSArray, MLCTensor, NSDictionary;

@interface TCMLComputeMLPClassifierDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (retain, nonatomic) NSArray *layerSizes;
@property (retain, nonatomic) NSDictionary *tensors;
@property (retain, nonatomic) MLCTensor *fcFinalTensor;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)addFullyConnectedLayerWithIndex:(unsigned long long)a0 outputChannels:(unsigned long long)a1 source:(id)a2 graph:(id)a3;
- (id)fullyConnectedLayerForIndex:(unsigned long long)a0 outputChannels:(unsigned long long)a1;

@end
