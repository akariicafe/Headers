@class AXPIFingerController, NSObject;
@protocol OS_dispatch_queue;

@interface AXPISystemActionHelper : NSObject {
    struct __IOHIDUserDevice { } *_homeButtonUserDevice;
    unsigned long long _sysdiagnoseCancelCount;
    NSObject<OS_dispatch_queue> *_sysdiagnoseCancelCountQueue;
    AXPIFingerController *_fingerController;
}

+ (id)sharedInstance;

- (void)takeScreenshot;
- (void)toggleMute;
- (id)init;
- (void).cxx_destruct;
- (void)activateSOSMode;
- (void)rebootDevice;
- (void)warm;
- (void)toggleDock;
- (void)toggleReachability;
- (void)shake;
- (void)revealSpotlight;
- (void)armApplePay;
- (void)adjustSystemZoom:(long long)a0;
- (void)decreaseVolume;
- (void)toggleSpotlight;
- (void)toggleNotificationCenter;
- (void)increaseVolume;
- (void)activateSiri;
- (void)toggleAppSwitcher;
- (void)toggleControlCenter;
- (void)activateSiriFromClient:(id)a0;
- (void)pressHomeButtonDown;
- (void)liftHomeButtonUp;
- (void)_handleHomeButtonDispatch:(BOOL)a0;
- (void)pressLockButtonDown;
- (void)liftLockButtonUp;
- (void)_sendButtonEvent:(unsigned int)a0;
- (void)pressVolumeDownButtonDown;
- (void)liftVolumeDownButtonUp;
- (void)pressVolumeUpButtonDown;
- (void)liftVolumeUpButtonUp;
- (BOOL)_hasScreenSwitch;
- (void)_sendShakeEvent;
- (void)_sendDeviceOrientationChange:(int)a0;
- (void)performActionForSystemAction:(id)a0 fromClient:(id)a1;
- (void)activateTripleClick;
- (void)activateHomeButton;
- (void)activateLockButton;
- (BOOL)isRingerSwitchOn;
- (void)toggleRingerSwitch:(BOOL)a0;
- (void)toggleCommandAndControl;
- (void)confirmApplePay;
- (void)_performScrollAction:(BOOL)a0;
- (void)_toggleAssistiveTouch;
- (void)_toggleVoiceOver;
- (void)_toggleClassicInvertColors;
- (void)_toggleSmartInvert;
- (void)_toggleZoom;
- (void)_toggleMagnifier;
- (void)_toggleSwitchControl;
- (void)_toggleFullKeyboardAccess;
- (void)_activateSpeakScreen;
- (void)activatePeopleDetection;
- (void)activateVoiceControl;
- (void)rotatePortrait;
- (void)rotateUpsideDown;
- (void)rotateLeft;
- (void)rotateRight;
- (void)performSysdiagnoseWithStatusUpdateHandler:(id /* block */)a0;
- (void)_showAlertForReboot;
- (void)performActionForSystemAction:(id)a0;

@end
