@class NSDictionary, NSLocale, NSMutableArray, NSNumber;

@interface QuickTypePFLEmojiClassificationData : QuickTypePFLTrainingData {
    NSMutableArray *_labels;
    NSLocale *_locale;
    NSNumber *_noneClassProbability;
    struct CFScopedPtr<void *> { void *m_ref; } _embedding;
}

@property (readonly, nonatomic) NSDictionary *labelClasses;
@property (readonly, nonatomic) unsigned long long numOutputClasses;
@property (readonly, nonatomic) unsigned long long embeddingDimension;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addResource:(id)a0;
- (BOOL)addExamples:(id)a0;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (BOOL)loadFromCoreDuet:(id)a0;
- (id)getTrainingDataBatch:(unsigned long long)a0;
- (id)getEvaluationDataPoint;
- (void)sampleNoneClassExample:(id)a0;

@end
