@class NSMutableArray, BTSDevice;

@interface AccessoryVoiceControlController : PSListController {
    NSMutableArray *_volumeControlSpecifiers;
    BTSDevice *_currentDevice;
    BOOL _volumeControlEnabled;
    BOOL _setEnableVolumeControlAtStart;
    BOOL _dismissed;
}

- (id)specifiers;
- (id)clickHoldModeRight;
- (id)clickHoldModeLeft;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)deviceRemoved:(id)a0;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)setGestureMode:(id)a0 specifier:(id)a1;
- (void)setVolumeControlEnabled:(id)a0 specifier:(id)a1;
- (id)getVolumeControlEnabled:(id)a0;
- (BOOL)isVolumeControlEnabled;
- (void)dismissPressAndHold;

@end
