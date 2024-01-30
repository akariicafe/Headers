@class SBHIDUILockAssertion, SBProximitySensorManager;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) SBHIDUILockAssertion *proxLockAssertion;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;

- (void).cxx_destruct;
- (void)observeFinalPressUp;
- (BOOL)consumeInitialPressDown;
- (id)initWithProximitySensorManager:(id)a0;
- (BOOL)consumeInitialPressUp;
- (BOOL)consumeSecondPressDown;
- (void)observeSinglePressDidFail;
- (void)_performWake;
- (void)_performSleep;
- (void)_resumeProxForReason:(id)a0;
- (void)_suspendProx;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)a0;
- (void)_cancelPreviousResumeProxRequests;

@end
