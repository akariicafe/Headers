@interface _UIPointerTextBehaviorSettings : PTSettings

@property (nonatomic) double regionCaptureMultiplier;
@property (nonatomic) double textLineRegionPadding;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
