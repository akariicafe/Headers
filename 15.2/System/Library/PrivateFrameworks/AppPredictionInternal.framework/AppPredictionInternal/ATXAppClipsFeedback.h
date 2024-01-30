@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (BOOL)shouldShowAppClips;
- (double)_overallRejectsNoDecay;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (void).cxx_destruct;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (id)init;
- (double)_overallAppClipsengagement;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (double)_overallConfirmsNoDecay;
- (double)_overallConfirms;
- (double)_overallRejects;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;

@end
