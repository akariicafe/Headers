@class NSArray;

@interface _EARAppLmData : _EARLmData {
    BOOL roundingEnabled;
    long long inputType;
}

@property (readonly, nonatomic) struct shared_ptr<quasar::AppLmData> { struct AppLmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (readonly, nonatomic) NSArray *orderedOovs;

+ (void)initialize;

- (long long)inputType;
- (void)setInputFormat:(long long)a0;
- (id)metrics;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2 hasWeights:(BOOL)a3;
- (void)addLineWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addNgramCountWithType:(unsigned long long)a0 content:(id)a1;
- (BOOL)roundingEnabled;
- (void)setRoundingEnabled:(BOOL)a0;
- (BOOL)setProns:(id)a0 forWord:(id)a1 pronIsXsampa:(BOOL)a2;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfigPath:(id)a2;
- (id)addOovTokensFromSentence:(id)a0;
- (BOOL)setXsampaProns:(id)a0 forWord:(id)a1;
- (BOOL)setAsrProns:(id)a0 forWord:(id)a1;
- (void)generateLmeData:(id)a0;
- (long long)lmeThreshold;
- (id)supportedSlots;

@end
