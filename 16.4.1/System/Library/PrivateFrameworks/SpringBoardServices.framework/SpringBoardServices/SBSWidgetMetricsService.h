@protocol SBSWidgetMetricsProviding;

@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> metricsProvider;

- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)metricsForLiveActivities;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (void)dealloc;
- (id)init;
- (id)systemMetricsForWidget:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetricsProvider:(id)a0;

@end
