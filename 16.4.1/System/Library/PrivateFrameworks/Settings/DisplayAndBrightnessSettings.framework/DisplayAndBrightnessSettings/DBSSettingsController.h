@class NSString, CBClient, NSArray, NSMutableDictionary, SBSConnectedDisplayInfo, DBSZoomAndProSpecifiers, SBSExternalDisplayService, NSDictionary, PSSetupController, UISUserInterfaceStyleMode, NSDateFormatter;

@interface DBSSettingsController : PSListController <UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, DBSZoomAndProSpecifiersDelegate, DBSArrangementViewControllerDelegate, PSListControllerTestableSpecifiers> {
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    NSDateFormatter *_timeFormatter;
    BOOL _isProMode;
}

@property (retain, nonatomic) UISUserInterfaceStyleMode *_styleMode;
@property (retain, nonatomic) CBClient *_brightnessClient;
@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor;
@property (retain, nonatomic) SBSExternalDisplayService *displayService;
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (retain, nonatomic) PSSetupController *arrangementViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)profileNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)userInterfaceStyleModeDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)screenLock:(id)a0;
- (id)_deviceAppearanceScheduleString;
- (id)getAppearanceValueForSpecifier:(id)a0;
- (void)insertExternalDisplaySpecifiers;
- (id)lockGroupFooter;
- (void)removeExternalDisplaySpecifiers;
- (id)_darkAppearanceTimeString;
- (id)_deviceAppearanceScheduleSpecifier;
- (id)_lightAppearanceTimeString;
- (void)_localizeAutoLockTitles;
- (void)_localizeAutoLockTitlesWithSpecifiers:(id)a0;
- (void)_reloadBlueLightSpecifiers:(id)a0 reloadUI:(BOOL)a1;
- (void)_updateAutoLockSpecifiers:(id)a0;
- (void)_updateDeviceAppearanceToNewInterfaceStyle:(long long)a0;
- (void)arrangementViewControllerDidDismiss:(id)a0;
- (id)blueLightSchedule:(id)a0;
- (id)boldTextEnabledForSpecifier:(id)a0;
- (id)connectedDisplaySpecifiers;
- (void)deviceAppearanceTableViewCellUserDidTapOnDarkAppearance:(id)a0;
- (void)deviceAppearanceTableViewCellUserDidTapOnLightAppearance:(id)a0;
- (id)getAutomaticAppearanceEnabledForSpecifier:(id)a0;
- (id)getProModeEnabled;
- (void)handleBlueLightStatusChanged:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (void)handleDBSExternalDisplayManagerCurrentModeDidChangeNotification:(id)a0;
- (void)handleDisplayServiceInfoUpdate;
- (void)insertArrangementSpecifier;
- (id)localizedTimeForTime:(struct { int x0; int x1; })a0;
- (id)locksAndUnlocksWithCase:(id)a0;
- (id)makeArrangementSpecifier;
- (void)presentArrangementController;
- (void)presentModalFineTuneController;
- (void)presentModalMagnifyController;
- (BOOL)proModeSupported;
- (void)setAppearanceValue:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticAppearanceEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setBoldTextEnabled:(id)a0 specifier:(id)a1;
- (void)setLocksAndUnlocksWithCase:(id)a0 specifier:(id)a1;
- (void)setProModeEnabled:(BOOL)a0;
- (void)setScreenLock:(id)a0 specifier:(id)a1;
- (BOOL)shouldShowAlwaysOn;
- (BOOL)shouldShowAutoLock;
- (BOOL)shouldShowCaseLockOption;
- (void)updateAutoLockSpecifier;
- (void)updateExternalDisplayInfoWithCompletionHandler:(id /* block */)a0;
- (void)updateForExternalMonitorAvailability:(BOOL)a0;

@end
