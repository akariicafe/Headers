@class _UIPageControlPlatterSettings, _UIPageControlIndicatorSettings;

@interface _UIPageControlSettings : PTSettings

@property (retain, nonatomic) _UIPageControlIndicatorSettings *indicatorSettings;
@property (retain, nonatomic) _UIPageControlPlatterSettings *platterSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
