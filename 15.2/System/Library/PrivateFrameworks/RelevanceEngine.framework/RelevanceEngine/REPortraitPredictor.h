@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (readonly, nonatomic) NSDictionary *namedEntityScores;

+ (double)updateInterval;

- (void)update;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (float)userAffinityToContent:(id)a0;
- (void)_loadStoreIfNeeded;

@end
