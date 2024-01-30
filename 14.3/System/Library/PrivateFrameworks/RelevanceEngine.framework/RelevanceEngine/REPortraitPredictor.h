@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (readonly, nonatomic) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (id)_init;
- (float)userAffinityToContent:(id)a0;
- (void)_loadStoreIfNeeded;

@end
