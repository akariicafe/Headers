@class NSArray, NLDataProvider;

@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (void).cxx_destruct;
- (id)configuration;
- (unsigned long long)numberOfLabels;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (id)initWithDataProvider:(id)a0 indexes:(id)a1;
- (void)_generateMaps;
- (unsigned long long)numberOfVocabularyEntries;

@end
