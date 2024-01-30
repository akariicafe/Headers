@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_histogram;
}

- (id)initWithWidgetFeedbackHistogram:(id)a0;
- (double)eventCountForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (id)categoryStringForFeedbackType:(unsigned long long)a0;
- (double)tapEngagementRateForWidgetBundleId:(id)a0;
- (id)init;
- (double)pseudoTapEngagementRateForWidgetBundleId:(id)a0;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1 weight:(float)a2;
- (void).cxx_destruct;

@end
