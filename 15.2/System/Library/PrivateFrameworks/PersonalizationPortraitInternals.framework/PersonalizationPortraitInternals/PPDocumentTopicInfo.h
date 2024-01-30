@class NSMutableArray;

@interface PPDocumentTopicInfo : NSObject {
    NSMutableArray *_topicAlgorithmCounts;
}

- (void).cxx_destruct;
- (id)init;
- (void)addToCountForAlgorithm:(unsigned long long)a0 value:(double)a1;
- (double)countForAlgorithm:(unsigned long long)a0;

@end
