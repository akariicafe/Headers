@interface _EARLmData : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::LmData> { struct LmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (nonatomic) BOOL roundingEnabled;

+ (void)initialize;

- (double)maxAge;
- (void).cxx_destruct;
- (unsigned long long)queryLimit;
- (id)metrics;
- (double)minAge;
- (id)sources;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfiguration:(id)a2;
- (void)addDocumentWithUUID:(id)a0 content:(id)a1;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (BOOL)roomForMoreData;

@end
