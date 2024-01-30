@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHeroAppFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_heroAppHistogram;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithHistogram:(id)a0;
- (double)_rejectsForHeroAppPrediction:(id)a0;
- (double)_confirmsForHeroAppPrediction:(id)a0;
- (double)_engagementForHeroAppPrediction:(id)a0;
- (void)addConfirmForHeroAppPredictionWithBundleId:(id)a0 weight:(float)a1;
- (void)addRejectForHeroAppPredictionWithBundleId:(id)a0 weight:(float)a1;
- (BOOL)shouldShowHeroAppPrediction:(id)a0;

@end
