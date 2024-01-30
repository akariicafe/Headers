@class SBScreenWakeAnimationController, SBSoundController, SBBacklightController, SpringBoard, NSString, SBHIDUISensorModeController, SBLockScreenManager;
@protocol BSInvalidatable;

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction, SBHardwareButtonGestureParametersObserver>

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (retain, nonatomic) SBSoundController *soundController;
@property (retain, nonatomic) SBHIDUISensorModeController *sensorModeController;
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

- (BOOL)consumeInitialPressDown;
- (void)_performWake;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)_performSleep;
- (BOOL)consumeSinglePressUp;
- (id)init;
- (void).cxx_destruct;
- (BOOL)reverseSleepIfNeededAndPossible;
- (void)_playLockSound;
- (void)performSleepForReason:(id)a0;

@end
