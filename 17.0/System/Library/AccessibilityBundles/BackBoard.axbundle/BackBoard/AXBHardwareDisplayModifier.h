@interface AXBHardwareDisplayModifier : NSObject

+ (void)initializeMonitor;

- (id)init;
- (void)dealloc;
- (void)_updateGrayScaleSettings;

@end
