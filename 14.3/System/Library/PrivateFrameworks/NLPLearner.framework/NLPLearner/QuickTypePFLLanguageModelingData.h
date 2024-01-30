@class NSString, NSLocale;

@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData {
    NSLocale *_locale;
    struct CFScopedPtr<const _LXLexicon *> { struct _LXLexicon *m_ref; } _lexicon;
}

@property (copy, nonatomic) NSString *tokenIDMapPath;

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (void).cxx_destruct;
- (void)addResource:(id)a0;
- (BOOL)addExamples:(id)a0;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (BOOL)loadFromCoreDuet:(id)a0;
- (id)getTrainingDataBatch:(unsigned long long)a0;
- (id)getEvaluationDataPoint;

@end
