@interface _EARLmData : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::PersonalizedLmData> { struct PersonalizedLmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (nonatomic) BOOL roundingEnabled;
@property (readonly, nonatomic) long long inputType;

+ (void)initialize;

- (double)maxAge;
- (id)sources;
- (id).cxx_construct;
- (id)metrics;
- (double)minAge;
- (void).cxx_destruct;
- (void)setInputFormat:(long long)a0;
- (unsigned long long)queryLimit;
- (BOOL)roomForMoreData;
- (void)enumerateSentencesOfType:(unsigned long long)a0 block:(id /* block */)a1;
- (void)addDocumentWithUUID:(id)a0 content:(id)a1;
- (void)addDocumentWithUUID:(id)a0 content:(id)a1 metadata:(id)a2;
- (void)addLineWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addNgramCountWithType:(unsigned long long)a0 content:(id)a1;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2 hasWeights:(BOOL)a3;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfiguration:(id)a2;
- (id)initWithConfiguration:(id)a0 recognizerConfiguration:(id)a1;
- (id)wordFrequency;

@end
