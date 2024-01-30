@class NSMutableDictionary, MontrealNNModelNetwork;

@interface MontrealNNGenerateModel : NSObject

@property (readonly) unsigned long long weightFormat;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork { } *nnObject;
@property (readonly) NSMutableDictionary *inputs;
@property (readonly) NSMutableDictionary *outputs;

- (void)merge:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWeightFormat:(unsigned long long)a0;
- (void *)generateModelContainer;
- (void)addInputs:(id)a0;
- (void)addOutputs:(id)a0;
- (id)networkInputs;
- (id)networkOutputs;
- (id)modelContainerPath;
- (void)removeInput:(id)a0;
- (void)removeOutput:(id)a0;

@end
