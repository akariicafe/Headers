@class NSString;
@protocol SBHWidgetMetricsProviderDelegate;

@interface SBHWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding>

@property (weak, nonatomic) id<SBHWidgetMetricsProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)systemDefaultMetricsSpecification;
- (id)systemMetricsForWidget:(id)a0;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)systemMetricsForFamily:(long long)a0;

@end
