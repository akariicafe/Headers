@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
