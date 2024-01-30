@interface PRWidgetMetricsProvider : NSObject

+ (id)sharedInstance;

- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)_complicationRectangularMetrics;
- (id)_complicationCircularMetrics;
- (long long)_complicationFontStyle;
- (id)systemMetricsForWidget:(id)a0;
- (id)_transparentMediumMetrics;
- (id)lockScreenWidgetMetricsSpecifications;
- (double)_insetScreenWidth;
- (id)_complicationInlineMetrics;

@end
