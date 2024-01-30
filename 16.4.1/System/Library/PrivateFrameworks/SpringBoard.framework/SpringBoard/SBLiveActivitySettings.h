@interface SBLiveActivitySettings : PTSettings

@property (nonatomic) BOOL allowAlertsOnHostApp;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
