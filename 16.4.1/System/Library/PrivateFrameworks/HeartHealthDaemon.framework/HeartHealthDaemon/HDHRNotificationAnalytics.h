@class HDHRNotificationMetric;

@interface HDHRNotificationAnalytics : NSObject {
    HDHRNotificationMetric *_metric;
}

- (void)submit;
- (void).cxx_destruct;
- (void)_submitMetric;
- (id)_createMetricFromEventSample:(id)a0;
- (void)_setDoNotDisturbOn:(BOOL)a0;
- (id)initWithEventSample:(id)a0;

@end
