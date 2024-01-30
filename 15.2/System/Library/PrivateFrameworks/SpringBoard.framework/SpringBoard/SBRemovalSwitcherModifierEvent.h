@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) unsigned long long phase;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 reason:(long long)a2 phase:(unsigned long long)a3;

@end
