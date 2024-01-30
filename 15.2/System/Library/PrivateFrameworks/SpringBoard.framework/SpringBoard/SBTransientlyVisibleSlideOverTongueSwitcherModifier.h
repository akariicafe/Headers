@interface SBTransientlyVisibleSlideOverTongueSwitcherModifier : SBSwitcherModifier {
    unsigned long long _rightEdgeHintState;
    unsigned long long _edgeProtectEdge;
}

@property (readonly, nonatomic) unsigned long long mode;

+ (unsigned long long)slideOverTongueTransientlyVisibleModeForEvent:(id)a0;

- (unsigned long long)slideOverTongueState;
- (unsigned long long)slideOverTongueDirection;
- (id)handleTransitionEvent:(id)a0;
- (id)initWithMode:(unsigned long long)a0;
- (id)handleTimerEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)handleSlideOverEdgeProtectTongueEvent:(id)a0;

@end
