@class NSString;

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSString *reason;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithReason:(id)a0;

@end
