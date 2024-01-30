@class _ATXAppLaunchCategoricalHistogram;

@interface ATXActivitySuggestionsFeedbackHistogramHelper : NSObject {
    _ATXAppLaunchCategoricalHistogram *_feedbackCategoricalHistogram;
}

+ (id)histogramBundleIdForModeWithUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originAnchorType:(id)a3;

- (void).cxx_destruct;
- (id)init;
- (double)suggestionsGivenForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originAnchorType:(id)a3;
- (double)acceptancesForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originAnchorType:(id)a3;
- (double)rejectionsForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originAnchorType:(id)a3;
- (void)updateFeedbackHistogramWithEvent:(id)a0;
- (id)initWithFeedbackCategoricalHistogram:(id)a0;

@end
