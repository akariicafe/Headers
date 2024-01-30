@class NSMutableDictionary, NSMutableArray;

@interface _MLCANEWeightOps : NSObject

@property (readonly, nonatomic) NSMutableDictionary *weights;
@property (readonly, nonatomic) NSMutableArray *weightFiles;
@property (readonly, nonatomic) NSMutableDictionary *weightFileIndexMap;
@property (readonly, nonatomic) NSMutableDictionary *constantTensorMap;

+ (id)hexStringForData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)addWeightData:(id)a0 hash:(id)a1;
- (unsigned long long)addWeightData:(id)a0 weightDataType:(int)a1;
- (BOOL)convertAndComputHashWithWeightData:(id)a0 weightDataType:(int)a1 hash:(id *)a2 convertedData:(id *)a3;
- (id)queryConstantTensor:(id)a0;

@end
