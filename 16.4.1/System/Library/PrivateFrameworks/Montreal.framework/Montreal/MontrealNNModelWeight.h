@class NSString, NSArray, NSData, NSNumber, MontrealNNModelQuantization;

@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol>

@property (readonly) NSString *name;
@property (readonly) NSNumber *index;
@property (readonly) NSArray *dimension;
@property (readonly) NSArray *weightValues;
@property (readonly) NSData *weightData;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) NSString *jsonDir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonDescription;
- (void).cxx_destruct;
- (id)checkForValidity;
- (id)createConvertArrayToData:(id)a0 quantization:(id)a1;
- (id)createDataContainer;
- (id)createflattenWeightsFile:(id)a0;
- (id)createflattenWeightsHierarchy:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (void)generateJSONAtPath:(id)a0;
- (id)initWithDictionary:(id)a0 quantization:(id)a1 jsonDir:(id)a2;
- (id)initWithName:(id)a0 index:(id)a1 dimension:(id)a2;
- (id)initWithName:(id)a0 index:(id)a1 dimension:(id)a2 weightData:(id)a3;
- (id)initWithName:(id)a0 index:(id)a1 dimension:(id)a2 weightValues:(id)a3;

@end
