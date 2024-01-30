@class CVNLPTokenIDConverter, NSLocale;

@interface QuickTypePFLCharacterLanguageModelingData : QuickTypePFLLanguageModelingData {
    NSLocale *_locale;
    CVNLPTokenIDConverter *_tokenConverter;
}

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (void).cxx_destruct;
- (void)addResource:(id)a0;
- (id)initWithLocale:(id)a0;
- (BOOL)loadFromCoreDuet:(id)a0;

@end
