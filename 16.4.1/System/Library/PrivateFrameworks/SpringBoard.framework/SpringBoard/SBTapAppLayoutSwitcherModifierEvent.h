@class SBAppLayout;

@interface SBTapAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) long long source;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 layoutRole:(long long)a1 modifierFlags:(long long)a2;
- (id)initWithAppLayout:(id)a0 layoutRole:(long long)a1 modifierFlags:(long long)a2 source:(long long)a3;

@end
