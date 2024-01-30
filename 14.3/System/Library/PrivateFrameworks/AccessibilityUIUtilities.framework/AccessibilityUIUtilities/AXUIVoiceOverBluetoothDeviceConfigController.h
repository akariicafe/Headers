@class NSArray, SCROBrailleClient;
@protocol VOSBluetoothConnectableDevice;

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {
    NSArray *_forgetGroupSpecifiers;
    NSArray *_additionalConfigGroupSpecifiers;
    BOOL _dismissed;
    SCROBrailleClient *_brailleClient;
}

@property (retain, nonatomic) id<VOSBluetoothConnectableDevice> device;

- (void)_doReallyForgetDevice;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deviceUpdated:(id)a0;
- (id)specifiers;
- (void)deviceRemoved:(id)a0;
- (void)deviceConnectedHandler:(id)a0;
- (void)_allowUSBRM;
- (void)_clearVOUSBRMDisabler;
- (void)forgetDevice:(id)a0;

@end
