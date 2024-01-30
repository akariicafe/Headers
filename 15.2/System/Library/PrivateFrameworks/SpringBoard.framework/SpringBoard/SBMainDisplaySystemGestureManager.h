@class SBFZStackParticipant, NSString, SBGestureDefaults, SBHomeGestureParticipant;
@protocol BSInvalidatable;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager <SBFZStackParticipantDelegate> {
    SBGestureDefaults *_gestureDefaults;
    id<BSInvalidatable> _systemGestureEventDeferringRule;
    id<BSInvalidatable> _pointerEventRoutingAssertion;
    BOOL _multitaskingGesturesEnabled;
}

@property (retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant;
@property (retain, nonatomic) SBFZStackParticipant *accessibilityZStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)zStackParticipantDidChange:(id)a0;
- (void)_setupSystemGestureEventDeferringIfNeeded;
- (void)_evaluateEnablement;
- (void)_updateUserPreferences;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setSystemGesturesDisabledForAccessibility:(BOOL)a0;
- (id)_initWithDisplayIdentity:(id)a0;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)addGestureRecognizer:(id)a0 withType:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)_isTouchGestureWithType:(unsigned long long)a0;

@end
