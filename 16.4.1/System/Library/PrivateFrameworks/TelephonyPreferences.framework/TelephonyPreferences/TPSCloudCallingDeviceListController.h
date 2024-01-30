@class NSArray, PSSpecifier, TPSCloudCallingDeviceController, NSString;

@interface TPSCloudCallingDeviceListController : TPSCloudCallingListController <TPSCloudCallingDeviceControllerDelegate>

@property (copy, nonatomic) NSArray *deviceSwitchSpecifiers;
@property (readonly, nonatomic) TPSCloudCallingDeviceController *deviceController;
@property (readonly, nonatomic) PSSpecifier *devicesGroupSpecifier;
@property (readonly, nonatomic) PSSpecifier *mainGroupSpecifier;
@property (readonly, nonatomic) PSSpecifier *mainSwitchSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)isMainSwitchOn:(id)a0;
- (void)cloudCallingDeviceController:(id)a0 didChangeDevices:(id)a1;
- (id)isDeviceSwitchOn:(id)a0;
- (void)setDeviceSwitchOn:(id)a0 specifier:(id)a1;
- (void)setMainSwitchOn:(id)a0 specifier:(id)a1;

@end
