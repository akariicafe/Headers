@class NSString, NSDictionary, NSUserDefaults;

@interface SUSUISoftwareUpdateDefaults : BSAbstractDefaultDomain {
    NSUserDefaults *_sbLegacyDefaults;
}

@property (retain, nonatomic) NSString *lastOSVersion;
@property (retain, nonatomic) NSDictionary *softwareUpdateState;
@property (nonatomic) BOOL needsAlertPresentationAfterOTAUpdate;

- (id)init;
- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;
- (id)_initWithLegacyDefaults:(id)a0;
- (void)_migrateLegacySpringBoardPreferences;
- (void)_clearLegacySpringBoardPreferences;
- (void)migrateAndClearLegacyPreferences;

@end
