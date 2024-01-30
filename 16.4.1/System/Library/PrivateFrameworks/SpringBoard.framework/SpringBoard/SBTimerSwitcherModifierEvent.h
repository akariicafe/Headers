@class NSString;

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSString *reason;

- (id)initWithReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
