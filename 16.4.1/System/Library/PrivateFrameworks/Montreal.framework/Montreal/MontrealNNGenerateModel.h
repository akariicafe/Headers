@class NSMutableDictionary, MontrealNNModelNetwork;

@interface MontrealNNGenerateModel : NSObject

@property (readonly) unsigned long long weightFormat;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork { } *nnObject;
@property (readonly) NSMutableDictionary *inputs;
@property (readonly) NSMutableDictionary *outputs;

- (void)merge:(id)a0;
- (void)removeOutput:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeInput:(id)a0;
- (void)addInputs:(id)a0;
- (void)addOutputs:(id)a0;
- (void *)generateModelContainer;
- (id)initWithWeightFormat:(unsigned long long)a0;
- (id)modelContainerPath;
- (id)networkInputs;
- (id)networkOutputs;

@end
