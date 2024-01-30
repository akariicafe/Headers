@class NSDateFormatter, NSString, NSArray, UISUserInterfaceStyleMode, CBClient, NSDictionary, NSMutableDictionary;

@interface DBSSettingsController : PSListController <UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, PSListControllerTestableSpecifiers> {
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    NSDateFormatter *_timeFormatter;
}

@property (retain, nonatomic) UISUserInterfaceStyleMode *_styleMode;
@property (retain, nonatomic) CBClient *_brightnessClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)userInterfaceStyleModeDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)profileNotification:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)brightnessChangedExternally;
- (id)screenLock:(id)a0;
- (void)handleBlueLightStatusChanged:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (id)localizedTimeForTime:(struct { int x0; int x1; })a0;
- (void)deviceAppearanceTableViewCellUserDidTapOnLightAppearance:(id)a0;
- (void)deviceAppearanceTableViewCellUserDidTapOnDarkAppearance:(id)a0;
- (id)_lightAppearanceTimeString;
- (id)_darkAppearanceTimeString;
- (void)handleDBSExternalDisplayManagerCurrentModeDidChangeNotification:(id)a0;
- (void)handleBrightnessChangedNotification:(id)a0;
- (void)updateAutoLockSpecifier;
- (void)_cleanupTransactionRef;
- (id)_deviceAppearanceScheduleSpecifier;
- (BOOL)shouldShowAutoLock;
- (BOOL)shouldShowCaseLockOption;
- (id)lockGroupFooter;
- (void)presentModalMagnifyController;
- (id)connectedDisplaySpecifiers;
- (void)_updateAutoLockSpecifiers:(id)a0;
- (void)_localizeAutoLockTitlesWithSpecifiers:(id)a0;
- (void)_reloadBlueLightSpecifiers:(id)a0 reloadUI:(BOOL)a1;
- (id)backlightValue:(id)a0;
- (void)showAlertToDisableAccessibilityFilters:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)insertExternalDisplaySpecifiers;
- (void)removeExternalDisplaySpecifiers;
- (id)_deviceAppearanceScheduleString;
- (void)_updateDeviceAppearanceToNewInterfaceStyle:(long long)a0;
- (void)setScreenLock:(id)a0 specifier:(id)a1;
- (void)_localizeAutoLockTitles;
- (id)locksAndUnlocksWithCase:(id)a0;
- (void)setLocksAndUnlocksWithCase:(id)a0 specifier:(id)a1;
- (id)localizedMagnifyModeName;
- (void)setBoldTextEnabled:(id)a0 specifier:(id)a1;
- (id)boldTextEnabledForSpecifier:(id)a0;
- (void)setBacklightValue:(id)a0 specifier:(id)a1;
- (id)blueLightSchedule:(id)a0;
- (id)getAutoWhiteBalanceEnabled:(id)a0;
- (void)setAutoWhiteBalanceEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getAppearanceValueForSpecifier:(id)a0;
- (void)setAppearanceValue:(id)a0 forSpecifier:(id)a1;
- (id)getAutomaticAppearanceEnabledForSpecifier:(id)a0;
- (void)setAutomaticAppearanceEnabled:(id)a0 forSpecifier:(id)a1;

@end
