@interface PXTilingSettings : PXSettings

@property (nonatomic) BOOL flipLayoutsHorizontally;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
