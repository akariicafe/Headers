@class NSArray, BMIntelligencePlatformFeatureStoreFeatureValueBasicValue, NSString;

@interface BMIntelligencePlatformFeatureStoreFeatureValue : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSArray *value_sequence;
@property (readonly, nonatomic) NSArray *value_sequence_shape;
@property (readonly, nonatomic) NSArray *value_dictionary;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureValueBasicValue *value;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithValue_sequence:(id)a0 value_sequence_shape:(id)a1 value_dictionary:(id)a2 value:(id)a3;

@end
