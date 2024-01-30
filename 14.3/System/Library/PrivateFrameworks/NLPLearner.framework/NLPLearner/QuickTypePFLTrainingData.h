@class NSMutableArray;

@interface QuickTypePFLTrainingData : NSObject

@property (retain, nonatomic) NSMutableArray *sentences;
@property (nonatomic) unsigned long long iterator;
@property (nonatomic) BOOL processingNewRecord;
@property (readonly, nonatomic) unsigned long long numTrainingSamples;
@property (nonatomic) unsigned long long maxSequenceLength;

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;
+ (id)trainingDataFor:(long long)a0 andLocale:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)rewind;
- (void)addResource:(id)a0;
- (BOOL)loadFromCoreDuet:(id)a0 withLocale:(id)a1 andLMStreamTokenizationBlock:(id /* block */)a2;
- (BOOL)loadFromCoreDuet:(id)a0;
- (id)getTrainingDataBatch:(unsigned long long)a0;
- (id)getEvaluationDataPoint;

@end
