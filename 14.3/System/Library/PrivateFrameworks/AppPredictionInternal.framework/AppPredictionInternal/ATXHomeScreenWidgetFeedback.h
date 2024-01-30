@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_histogram;
}

- (id)init;
- (void).cxx_destruct;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (double)eventCountForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (id)initWithWidgetFeedbackHistogram:(id)a0;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1 weight:(float)a2;
- (id)categoryStringForFeedbackType:(unsigned long long)a0;
- (double)tapEngagementRateForWidgetBundleId:(id)a0;
- (double)pseudoTapEngagementRateForWidgetBundleId:(id)a0;

@end
