@class NSString, SBBacklightController, SBIdleTimerGlobalCoordinator;
@protocol BSInvalidatable;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {
    SBBacklightController *_backlightController;
    id<BSInvalidatable> _idleTimerDisableAssertion;
    BOOL _scheduled;
}

@property (retain, nonatomic) SBIdleTimerGlobalCoordinator *idleTimerGlobalCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowSceneDidConnect:(id)a0;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)a0;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_backlightWillUndim:(id)a0;
- (void)_cancelScheduledBacklightFactorToZero;
- (void)_restoreBacklightFactor;
- (void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
- (void)_turnBacklightOff;

@end
