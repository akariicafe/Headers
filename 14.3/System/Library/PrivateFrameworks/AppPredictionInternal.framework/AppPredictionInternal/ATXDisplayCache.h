@class NSString, NSArray, ATXActionCriteriaWorldState;

@interface ATXDisplayCache : NSObject <ATXActionProducerDelegate> {
    NSArray *_producers;
}

@property (retain, nonatomic) ATXActionCriteriaWorldState *worldState;
@property (readonly, nonatomic) NSString *cacheBasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDisplayCache;
+ (id)firstUpdateDateForActions:(id)a0;

- (id)actions;
- (void)writeToDisk;
- (void).cxx_destruct;
- (void)updateLockscreenIfNeededOldAction:(id)a0 newAction:(id)a1 actionResponse:(id)a2;
- (id)filteredActionsFromActions:(id)a0;
- (id)initWithProducers:(id)a0 cacheBasePath:(id)a1;
- (void)actionProducerProducedNewActions:(id)a0;
- (void)updateOnDiskCache;
- (void)setUpdateJobForDate:(id)a0;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)unFilteredActions;
- (void)logDisplayCacheActionResults:(id)a0 lockscreenPredictionIndices:(id)a1;
- (void)setUpdateJobForCriteria:(id)a0;
- (void)writeToDiskActions:(id)a0;
- (id)atxMLActionProducer;
- (void)_logCacheUpdateWithSpotlightDiff:(double)a0 spotlightSetDiff:(double)a1 lockscreenDiff:(double)a2 lockscreenSetDiff:(double)a3;

@end
