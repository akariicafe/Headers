@protocol SBSWidgetMetricsProviding;

@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> metricsProvider;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMetricsProvider:(id)a0;
- (id)systemMetricsForWidget:(id)a0;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;

@end
