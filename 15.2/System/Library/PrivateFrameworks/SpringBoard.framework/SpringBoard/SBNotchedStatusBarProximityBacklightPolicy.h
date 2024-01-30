@class SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, NSString, _SBProximityTouchHandlingViewController, SBProximitySettings, _SBProximityTouchHandlingWindow;

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate> {
    BOOL _objectInProximity;
    _SBProximityTouchHandlingWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    unsigned long long _timesEnabledWithObjectInProximity;
    unsigned long long _touchesReceivedWithObjectInProximity;
}

@property (retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didHitAllowedRegion:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBacklightController:(id)a0;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)a0;
- (id)_createNewEnablementCondition;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)a0;
- (void)_setHandleTouchesIfNecessary:(BOOL)a0;
- (void)condition:(id)a0 enablementDidChange:(BOOL)a1;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;

@end
