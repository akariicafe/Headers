@class NSArray;

@interface _EARAppLmData : _EARLmData {
    BOOL roundingEnabled;
}

@property (readonly, nonatomic) struct shared_ptr<quasar::AppLmData> { struct AppLmData *__ptr_; struct __shared_weak_count *__cntrl_; } data;
@property (readonly, nonatomic) NSArray *orderedOovs;

+ (void)initialize;

- (void).cxx_destruct;
- (id)metrics;
- (id).cxx_construct;
- (void)addSentenceWithType:(unsigned long long)a0 uuid:(id)a1 content:(id)a2;
- (BOOL)roundingEnabled;
- (void)setRoundingEnabled:(BOOL)a0;
- (void)setProns:(id)a0 forWord:(id)a1 pronIsXsampa:(BOOL)a2;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 recognizerConfigPath:(id)a2;
- (void)setXsampaProns:(id)a0 forWord:(id)a1;
- (void)setAsrProns:(id)a0 forWord:(id)a1;
- (void)generateLmeData:(id)a0;

@end
