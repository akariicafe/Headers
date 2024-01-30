@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (void).cxx_destruct;
- (id)configuration;
- (id)initWithDataProviders:(id)a0;
- (unsigned long long)numberOfLabels;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (unsigned long long)numberOfVocabularyEntries;

@end
