@class SBHIDUILockAssertion, SBProximitySensorManager;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) SBHIDUILockAssertion *proxLockAssertion;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;

- (void)observeSinglePressDidFail;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)a0;
- (id)initWithProximitySensorManager:(id)a0;
- (void).cxx_destruct;
- (void)_suspendProx;
- (void)_resumeProxForReason:(id)a0;
- (void)_performSleep;
- (BOOL)consumeSecondPressDown;
- (void)_performWake;
- (void)observeFinalPressUp;
- (BOOL)consumeInitialPressUp;
- (BOOL)consumeInitialPressDown;
- (void)_cancelPreviousResumeProxRequests;

@end
