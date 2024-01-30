@class NSArray, SCROBrailleClient;
@protocol VOSBluetoothConnectableDevice;

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {
    NSArray *_forgetGroupSpecifiers;
    NSArray *_additionalConfigGroupSpecifiers;
    BOOL _dismissed;
    SCROBrailleClient *_brailleClient;
}

@property (retain, nonatomic) id<VOSBluetoothConnectableDevice> device;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)deviceUpdated:(id)a0;
- (void)dealloc;
- (void)deviceRemoved:(id)a0;
- (void)deviceConnectedHandler:(id)a0;
- (void)_allowUSBRM;
- (void)_clearVOUSBRMDisabler;
- (void)_doReallyForgetDevice;
- (void)forgetDevice:(id)a0;

@end
