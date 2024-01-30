@class NSMutableArray;

@interface PPDocumentTopicInfo : NSObject {
    NSMutableArray *_topicAlgorithmCounts;
}

- (id)init;
- (void).cxx_destruct;
- (void)addToCountForAlgorithm:(unsigned long long)a0 value:(double)a1;
- (double)countForAlgorithm:(unsigned long long)a0;

@end
