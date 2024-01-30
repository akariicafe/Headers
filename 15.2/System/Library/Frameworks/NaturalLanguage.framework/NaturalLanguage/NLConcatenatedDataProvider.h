@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}

- (struct __CFStringTokenizer { } *)tokenizer;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithDataProviders:(id)a0;
- (id)labelMap;
- (unsigned long long)numberOfLabels;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (unsigned long long)numberOfVocabularyEntries;

@end
