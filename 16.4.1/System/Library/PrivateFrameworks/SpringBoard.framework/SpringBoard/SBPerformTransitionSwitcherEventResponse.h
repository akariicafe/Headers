@class SBSwitcherTransitionRequest;

@interface SBPerformTransitionSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBSwitcherTransitionRequest *transitionRequest;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithTransitionRequest:(id)a0 gestureInitiated:(BOOL)a1;

@end
