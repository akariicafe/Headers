@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown7DayWarning) BOOL developerInstallBrickAlertShown7DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShown3DayWarning) BOOL developerInstallBrickAlertShown3DayWarning;
@property (nonatomic, getter=hasDeveloperInstallBrickAlertShownTomorrowWarning) BOOL developerInstallBrickAlertShownTomorrowWarning;

- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;

@end
