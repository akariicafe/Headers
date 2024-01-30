@interface TKAdaptiveResourceManager : NSObject

+ (void)addObject:(id)a0;
+ (id)traitCollection;
+ (void)removeObject:(id)a0;
+ (void)setup;
+ (struct CGSize { double x0; double x1; })size;
+ (void)adaptiveMetricsDidChange;
+ (struct CGSize { double x0; double x1; })readableContentSize;
+ (void)setOverrideTrackingAdaptiveView:(id)a0;
+ (void)windowSizeDidChange:(id)a0;

@end
