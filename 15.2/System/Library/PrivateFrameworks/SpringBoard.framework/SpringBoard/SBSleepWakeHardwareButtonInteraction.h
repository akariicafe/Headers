@class SBScreenWakeAnimationController, SBSoundController, SBBacklightController, SpringBoard, SBHIDInterface, NSString, SBLockScreenManager;
@protocol BSInvalidatable;

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver>

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (retain, nonatomic) SBSoundController *soundController;
@property (retain, nonatomic) SBHIDInterface *HIDInterface;
@property (retain, nonatomic) SpringBoard *SBApp;
@property (nonatomic) double multiplePressTimeInterval;
@property (nonatomic) BOOL fadeOutInProgressFromLockButtonWhileUnlocked;
@property (nonatomic) BOOL undidFadeOutFromLockButton;
@property (nonatomic) BOOL didPlayLockSound;
@property (retain, nonatomic) id<BSInvalidatable> deferOrientationUpdatesAssertion;
@property (nonatomic) BOOL inhibitNextSinglePressUp;
@property (nonatomic, getter=isSOSGestureActive) BOOL SOSGestureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_playLockSound;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (BOOL)reverseSleepIfNeededAndPossible;
- (void).cxx_destruct;
- (id)init;
- (void)_performSleep;
- (void)_performWake;
- (BOOL)consumeInitialPressDown;
- (BOOL)consumeSinglePressUp;

@end
