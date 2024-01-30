@class NSDictionary, NSArray;

@interface FedStatsDataEncoder : NSObject

@property (retain, nonatomic) NSDictionary *dataTypes;
@property (retain, nonatomic) NSArray *typeConfiguration;

+ (id)createWithDataTypeContent:(id)a0 possibleError:(id *)a1;
+ (BOOL)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;

- (void).cxx_destruct;
- (id)initWithDataTypes:(id)a0 combinationTypes:(id)a1;
- (id)encodeToOneHotVector:(id)a0 possibleError:(id *)a1;
- (id)decodeFromOneHotVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToOneHotVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;
- (id)decodeFromOneHotVector:(id)a0 withType:(id)a1 possibleError:(id *)a2;

@end
