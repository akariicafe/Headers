@class NSMutableString;

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    void *_tagger;
    NSMutableString *_string;
}

+ (id)dominantLanguageForString:(id)a0;

- (id)dominantLanguage;
- (void).cxx_destruct;
- (id)init;
- (void)processString:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;

@end
