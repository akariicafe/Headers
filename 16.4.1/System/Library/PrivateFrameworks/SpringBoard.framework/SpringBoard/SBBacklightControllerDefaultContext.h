@class SBHIDUISensorModeController, NSString, SBLockScreenManager, SBScreenWakeAnimationController, SBWakeLogger, SBIdleTimerDefaults, BLSBacklight, SBProximitySensorManager, SBScreenSleepCoordinator;

@interface SBBacklightControllerDefaultContext : NSObject <SBBacklightControllerContextProviding>

@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBIdleTimerDefaults *idleTimerDefaults;
@property (readonly, nonatomic) BLSBacklight *blsBacklight;
@property (readonly, nonatomic) SBScreenSleepCoordinator *screenSleepCoordinator;
@property (readonly, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (readonly, nonatomic) SBWakeLogger *wakeLogger;
@property (readonly, nonatomic) SBHIDUISensorModeController *HIDUISensorModeController;
@property (readonly, nonatomic) SBProximitySensorManager *proximitySensorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
