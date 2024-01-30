@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165;
@property (nonatomic) BOOL shouldWorkAround92220180;
@property (nonatomic) BOOL shouldWorkAround92398340;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
