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
- (unsigned long long)numberOfTokens;
- (void).cxx_destruct;
- (void)dealloc;
- (id)labelMap;
- (unsigned long long)numberOfLabels;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)inverseLabelMap;
- (id)initWithConfiguration:(id)a0 dataURL:(id)a1;
- (void)generateMapsWithModelTrainer:(id)a0;
- (void)_generateMapsWithModelTrainer:(id)a0;
- (void)_generateMaps;
- (void)_performLanguageRecognition;
- (unsigned long long)numberOfVocabularyEntries;

@end
