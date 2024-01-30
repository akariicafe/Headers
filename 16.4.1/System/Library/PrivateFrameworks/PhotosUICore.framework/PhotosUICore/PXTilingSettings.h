@interface PXTilingSettings : PXSettings

@property (nonatomic) BOOL flipLayoutsHorizontally;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
