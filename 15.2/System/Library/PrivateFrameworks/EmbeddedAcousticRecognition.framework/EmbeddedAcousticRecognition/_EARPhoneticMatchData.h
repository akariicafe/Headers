@interface _EARPhoneticMatchData : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::DataFeed> { struct DataFeed *__ptr_; struct __shared_weak_count *__cntrl_; } dataFeed;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)getLimit;
- (int)convertFeedType:(long long)a0;
- (id)initWithFeedType:(long long)a0 jsonConfigFile:(id)a1;
- (void)writeTsv:(id)a0;
- (void)sortItemsByPriorDesc;
- (void)sortItemsByPriorAsc;
- (void)normalizePriors;
- (void)expDecayPriors;
- (void)powerScalePriors;
- (void)applyRegexEnumerations;
- (BOOL)appendData:(id)a0 prior:(float)a1;
- (BOOL)roomForMoreData;

@end
