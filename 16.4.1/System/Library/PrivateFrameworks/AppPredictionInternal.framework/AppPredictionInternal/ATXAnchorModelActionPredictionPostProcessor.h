@class ATXActionPredictionBlacklist, ATXAnchorModelPrediction, ATXAnchorModelDataStoreWrapper;

@interface ATXAnchorModelActionPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXActionPredictionBlacklist *_blacklist;
}

+ (id)anchorPredictionScoredActionTuplesFromPredictions:(id)a0;
+ (void)inPlaceDeduplicateAnchorPredictionScoredActionTuples:(id)a0;

- (void).cxx_destruct;
- (id)initWithAnchorModelPrediction:(id)a0;
- (id)initWithAnchorModelPrediction:(id)a0 blacklist:(id)a1;
- (id)postProcessScoredAction:(id)a0;
- (id)recoverATXScoredAction;
- (id)replaceActionWithUpcomingMediaIfNeeded:(id)a0;
- (id)replacementActionWithResolvedMediaIntentContainer:(id)a0 originalAction:(id)a1;
- (id)replacementIntentFromUpcomingMediaForBundleId:(id)a0 intent:(id)a1;
- (BOOL)scoredActionIsBlacklisted:(id)a0;
- (BOOL)shouldCheckUpcomingMediaForIntent:(id)a0;

@end
