@class NSMutableString;

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    void *_tagger;
    NSMutableString *_string;
}

+ (id)dominantLanguageForString:(id)a0;

- (id)dominantLanguage;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)processString:(id)a0;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;

@end
