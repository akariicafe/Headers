@interface UVPrototypeSettings : PTSettings

@property (nonatomic) BOOL showDebugUI;
@property (nonatomic) BOOL forceMetricsView;
@property (nonatomic) double crashFadeOutOpacity;
@property (nonatomic) double crashAnimationDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
