@class NSArray;

@interface DSNSURLBatchEnumerator : NSObject {
    NSArray *_urls;
    NSArray *_targetNames;
    unsigned long long _index;
    unsigned long long _batchSize;
}

- (id)nextBatch;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0 targets:(id)a1 batchSize:(unsigned long long)a2;

@end
