@class NSArray, NSString, MontrealNNModelQuantization, MontrealNNModelOptimizerParam;

@interface MontrealNNModelNetwork : MontrealNNDescription <MontrealNNDescriptionProtocol>

@property (retain) NSArray *nodes;
@property (retain) NSArray *inputs;
@property (retain) NSArray *outputs;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelOptimizerParam *optimizerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)jsonDescription;
- (void).cxx_destruct;
- (id)initWithModelContainer:(void *)a0 tensors:(id)a1;
- (id)checkForValidity;
- (void)collapseNodes;
- (void)collapsePackUnpack:(id)a0 nodesToRemove:(id)a1;
- (id)createDataContainer;
- (void)description:(id)a0 indent:(id)a1;
- (void)generateJSONAtPath:(id)a0;
- (void *)generateModelContainer;
- (id)initWithDictionary:(id)a0 tensors:(id)a1 quantization:(id)a2 optimizerParams:(id)a3 jsonDir:(id)a4 optimization:(unsigned long long)a5;
- (id)initWithJSONDir:(id)a0;
- (void)removeView:(id)a0 nodesToRemove:(id)a1;
- (void)validateNetworkTensors:(id)a0;
- (void)validateNodeTensors;

@end
