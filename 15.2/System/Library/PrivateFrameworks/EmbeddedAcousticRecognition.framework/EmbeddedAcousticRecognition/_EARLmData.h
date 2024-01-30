@interface _EARLmData : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::LmData> { struct LmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (nonatomic) BOOL roundingEnabled;
@property (readonly, nonatomic) long long inputType;

+ (void)initialize;

- (double)maxAge;
- (double)minAge;
- (id)sources;
- (void)setInputFormat:(long long)a0;
- (id)metrics;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)queryLimit;
- (BOOL)roomForMoreData;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2 hasWeights:(BOOL)a3;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfiguration:(id)a2;
- (void)addDocumentWithUUID:(id)a0 content:(id)a1;
- (void)addDocumentWithUUID:(id)a0 content:(id)a1 metadata:(id)a2;
- (void)addLineWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (void)addNgramCountWithType:(unsigned long long)a0 content:(id)a1;
- (void)enumerateSentencesOfType:(unsigned long long)a0 block:(id /* block */)a1;
- (id)wordFrequency;

@end
