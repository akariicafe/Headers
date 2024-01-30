@interface SBIdleTimerSettings : PTSettings

@property (nonatomic) BOOL disableIdleTimer;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
