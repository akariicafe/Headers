@class SBGestureDefaults, SBHomeGestureParticipant;
@protocol BSInvalidatable;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {
    SBGestureDefaults *_gestureDefaults;
    id<BSInvalidatable> _systemGestureEventDeferringRule;
    id<BSInvalidatable> _pointerEventRoutingAssertion;
    BOOL _multitaskingGesturesEnabled;
}

@property (retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant;

+ (id)sharedInstance;

- (void)_evaluateEnablement;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)addGestureRecognizer:(id)a0 withType:(unsigned long long)a1;
- (id)_init;
- (void)_updateUserPreferences;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (id)_initWithDisplayIdentity:(id)a0;
- (void)setSystemGesturesDisabledForAccessibility:(BOOL)a0;
- (BOOL)_isTouchGestureWithType:(unsigned long long)a0;
- (void)_setupSystemGestureEventDeferringIfNeeded;

@end
