@protocol BTDevicePickerRemoteViewControllerHost;

@interface BTDevicePickerRemoteViewController : _UIRemoteViewController <BTDevicePickerRemoteViewControllerHost>

@property (weak, nonatomic) id<BTDevicePickerRemoteViewControllerHost> _delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)didDismissWithResult:(long long)a0 deviceAddress:(id)a1;
- (void)discoveredDevice:(id)a0 deviceAddress:(id)a1;

@end
