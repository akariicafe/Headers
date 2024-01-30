@class NSArray, SCROBrailleClient;
@protocol VOSBluetoothConnectableDevice;

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {
    NSArray *_forgetGroupSpecifiers;
    NSArray *_additionalConfigGroupSpecifiers;
    BOOL _dismissed;
    SCROBrailleClient *_brailleClient;
}

@property (retain, nonatomic) id<VOSBluetoothConnectableDevice> device;

- (void)deviceUpdated:(id)a0;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)_allowUSBRM;
- (void)_clearVOUSBRMDisabler;
- (void)_doReallyForgetDevice;
- (void)deviceConnectedHandler:(id)a0;
- (void)deviceRemoved:(id)a0;
- (void)forgetDevice:(id)a0;

@end
