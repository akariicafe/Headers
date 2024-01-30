@class NSMutableArray, BTSDevice;

@interface AccessoryVoiceControlController : PSListController {
    NSMutableArray *_volumeControlSpecifiers;
    BTSDevice *_currentDevice;
    BOOL _volumeControlEnabled;
    BOOL _setEnableVolumeControlAtStart;
    BOOL _dismissed;
}

- (void)dealloc;
- (id)specifiers;
- (id)clickHoldModeRight;
- (id)init;
- (id)clickHoldModeLeft;
- (void).cxx_destruct;
- (void)deviceRemoved:(id)a0;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)dismissPressAndHold;
- (id)getVolumeControlEnabled:(id)a0;
- (BOOL)isVolumeControlEnabled;
- (void)powerChangedHandler:(id)a0;
- (void)setGestureMode:(id)a0 specifier:(id)a1;
- (void)setVolumeControlEnabled:(id)a0 specifier:(id)a1;

@end
