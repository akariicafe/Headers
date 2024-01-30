@class NSDictionary, NSMutableArray, NSNumber;

@interface NLPLearnerEmojiClassificationData : NLPLearnerTextData {
    NSMutableArray *_labels;
    NSNumber *_noneClassProbability;
    struct CFScopedPtr<void *> { void *m_ref; } _embedding;
}

@property (readonly, nonatomic) NSDictionary *labelClasses;
@property (readonly, nonatomic) unsigned long long numOutputClasses;
@property (readonly, nonatomic) unsigned long long embeddingDimension;

+ (void)initialize;

- (id).cxx_construct;
- (void)addResource:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)addExamples:(id)a0;
- (BOOL)loadFromCoreDuet:(id)a0 limitSamplesTo:(unsigned long long)a1;
- (id)nextEvaluationDataPoint;
- (id)nextTrainingDataBatch:(unsigned long long)a0;
- (void)sampleNoneClassExample:(id)a0;

@end
