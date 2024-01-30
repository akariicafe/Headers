@class SBProximitySensorManager;
@protocol BSInvalidatable;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) id<BSInvalidatable> proxLockAssertion;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;

- (id)initWithProximitySensorManager:(id)a0;
- (void)observeFinalPressUp;
- (BOOL)consumeInitialPressDown;
- (void)_performWake;
- (void)_suspendProx;
- (void)observeSinglePressDidFail;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)a0;
- (void)_performSleep;
- (BOOL)consumeSecondPressDown;
- (void)_resumeProxForReason:(id)a0;
- (BOOL)consumeInitialPressUp;
- (void).cxx_destruct;
- (void)_cancelPreviousResumeProxRequests;

@end
