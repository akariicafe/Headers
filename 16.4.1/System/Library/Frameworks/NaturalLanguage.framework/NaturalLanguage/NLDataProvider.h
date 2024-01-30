@class NSString, NSArray, NLModelConfiguration, NSDictionary;

@interface NLDataProvider : NSObject {
    NLModelConfiguration *_configuration;
    struct __CFStringTokenizer { } *_tokenizer;
    NSArray *_instances;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
    unsigned long long _numberOfTokens;
    NSString *_recognizedLanguage;
    BOOL _generatedMaps;
    BOOL _performedLanguageRecognition;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long numberOfInstances;
@property (readonly) NSString *recognizedLanguage;

- (struct __CFStringTokenizer { } *)tokenizer;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)numberOfTokens;
- (id)labelMap;
- (id)inverseLabelMap;
- (void)_generateMaps;
- (void)_generateMapsWithModelTrainer:(id)a0;
- (void)_performLanguageRecognition;
- (id)documentFrequencyMap;
- (void)generateMapsWithModelTrainer:(id)a0;
- (id)initWithConfiguration:(id)a0 dataURL:(id)a1;
- (id)instanceAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
- (id)vocabularyMap;

@end
