@protocol SBSWidgetMetricsProviding;

@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> metricsProvider;

- (id)systemMetricsForWidget:(id)a0;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMetricsProvider:(id)a0;
- (void)dealloc;

@end
