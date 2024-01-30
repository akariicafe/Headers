@class NSString;

@interface PSGDeviceNameEditingController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (retain, nonatomic) NSString *originalDeviceName;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)deviceName:(id)a0;
- (id)_editedDeviceName;

@end
