@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (double)_overallConfirmsNoDecay;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallRejectsNoDecay;
- (id)init;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (void).cxx_destruct;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_overallRejects;
- (double)_overallAppClipsengagement;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallConfirms;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)shouldShowAppClips;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;

@end
