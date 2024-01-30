@interface SBSwitcherModifierEvent : SBChainableModifierEvent

@property (readonly, nonatomic) long long type;

- (id)loggingCategory;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isTransitionEvent;
- (BOOL)isGestureEvent;

@end
