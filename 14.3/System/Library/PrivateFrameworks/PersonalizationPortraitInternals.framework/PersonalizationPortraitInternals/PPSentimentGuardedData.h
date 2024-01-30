@class NSString, _PASCFBurstTrie, NLTokenizer;

@interface PPSentimentGuardedData : NSObject {
    _PASCFBurstTrie *_tokenWeightTrie;
    NLTokenizer *_tokenizer;
    NSString *_abGroupIdentifier;
}

- (void).cxx_destruct;

@end
