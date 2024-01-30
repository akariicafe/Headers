@interface TKAdaptiveResourceManager : NSObject

+ (id)traitCollection;
+ (void)setup;
+ (struct CGSize { double x0; double x1; })size;
+ (void)addObject:(id)a0;
+ (void)removeObject:(id)a0;
+ (void)adaptiveMetricsDidChange;
+ (void)setOverrideTrackingAdaptiveView:(id)a0;
+ (struct CGSize { double x0; double x1; })readableContentSize;
+ (void)windowSizeDidChange:(id)a0;

@end
