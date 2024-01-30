@class NSString;

@interface PSGAboutController : PSListController <PSListControllerURLHandler> {
    BOOL _firstViewDidAppear;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleResourceDictionaryWhenAlreadyPresented:(id)a0;
- (void)willUnlock;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setDeviceName:(id)a0 specifier:(id)a1;
- (id)deviceName:(id)a0;
- (void)updateDeviceNameSpecifierIfNeeded;

@end
