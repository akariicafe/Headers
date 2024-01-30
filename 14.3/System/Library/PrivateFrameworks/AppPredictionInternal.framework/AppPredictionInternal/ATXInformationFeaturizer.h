@class _ATXAppLaunchHistogram, ATXHomeScreenWidgetFeedback;

@interface ATXInformationFeaturizer : NSObject <ATXInformationFeaturizerProtocol> {
    _ATXAppLaunchHistogram *_appLaunchHistory;
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
}

- (void).cxx_destruct;
- (id)featurizeInfoSuggestion:(id)a0;
- (void)lazyLoadWidgetFeedbackHistogram;
- (double)_fetchAppLaunchPopularityForBundleIdentifier:(id)a0;
- (void)lazyLoadAppLaunchHistogram;
- (double)_fetchAppLaunchCountForBundleIdentifier:(id)a0;
- (double)_fetchFeedbackForWidgetBundleId:(id)a0 type:(unsigned long long)a1;

@end
