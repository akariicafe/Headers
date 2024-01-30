@class NSDictionary;

@interface MLBatchedTensorsHolder : NSObject

@property (readonly, nonatomic) NSDictionary *batchedTensors;
@property (readonly, nonatomic) unsigned long long numberOfTensors;

- (id)initWithBatchedTensors:(id)a0 numberOfTensors:(unsigned long long)a1;
- (void).cxx_destruct;

@end
