@interface ATXLockscreenMetricsCollector : NSObject

- (id)_configurationMetricFromPosterConfiguration:(id)a0 lockscreenId:(id)a1 modeClient:(id)a2;
- (id)_dailyMetricsDescriptionGivenConfigurationMetrics:(id)a0 widgetMetrics:(id)a1 summaryMetric:(id)a2;
- (id)_dailyMetricsDescription_shouldPost:(BOOL)a0;
- (void)_fillSummaryMetric:(id)a0 configurations:(id)a1;
- (void)_postConfigurationMetrics:(id)a0 widgetMetrics:(id)a1 summaryMetric:(id)a2;
- (id)_weeklyRollingIdFromLockscreenId:(id)a0;
- (id)_widgetMetricFromComplication:(id)a0 lockscreenId:(id)a1;
- (id)dailyMetricsDescription;
- (void)postDailyMetrics;
- (void)postEditMetricWithEvent:(id)a0;
- (void)postSwitchMetricWithEvent:(id)a0;

@end
