@class NSString;

@interface PSGDeviceNameEditingController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (retain, nonatomic) NSString *originalDeviceName;

- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)suspend;
- (id)deviceName:(id)a0;
- (id)_editedDeviceName;

@end
