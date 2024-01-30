@interface CSLockScreenIdleTimerSettings : PTSettings

@property (nonatomic) BOOL increaseNotificationScrollLogging;
@property (nonatomic) double unlockSlideForIdleTimerDisabledPercentage;
@property (nonatomic) double unlockSlideForIdleTimerDisabledPercentageIPad;

+ (id)settingsControlModule;

- (void)setDefaultValues;

@end
