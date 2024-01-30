@class NNMKProtoFetchRequest, NSMutableDictionary;

@interface NNMKBatchedRequest : NSObject

@property (retain, nonatomic) NSMutableDictionary *messagesToBeSentInBatch;
@property (retain, nonatomic) NNMKProtoFetchRequest *latestFetchRequest;

- (id)init;
- (void).cxx_destruct;
- (id)diffFromMessages:(id)a0 maxMessagesToAdd:(unsigned long long)a1;

@end
