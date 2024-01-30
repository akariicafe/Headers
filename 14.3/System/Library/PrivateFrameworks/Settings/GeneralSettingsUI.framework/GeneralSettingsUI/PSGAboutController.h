@interface PSGAboutController : PSListController {
    BOOL _firstViewDidAppear;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (void)willResignActive;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)willBecomeActive;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willUnlock;
- (void)viewDidLoad;
- (void)setDeviceName:(id)a0 specifier:(id)a1;
- (id)deviceName:(id)a0;
- (void)updateDeviceNameSpecifierIfNeeded;

@end
