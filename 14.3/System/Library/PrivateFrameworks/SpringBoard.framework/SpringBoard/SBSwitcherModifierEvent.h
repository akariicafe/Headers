@interface SBSwitcherModifierEvent : SBChainableModifierEvent

@property (readonly, nonatomic) long long type;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)loggingCategory;
- (BOOL)isTransitionEvent;
- (BOOL)isGestureEvent;

@end
