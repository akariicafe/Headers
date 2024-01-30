@class CVNLPTokenIDConverter, NSLocale;

@interface QuickTypePFLCharacterLanguageModelingData : QuickTypePFLLanguageModelingData {
    NSLocale *_locale;
    CVNLPTokenIDConverter *_tokenConverter;
}

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (id)initWithLocale:(id)a0;
- (void)addResource:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadFromCoreDuet:(id)a0;

@end
