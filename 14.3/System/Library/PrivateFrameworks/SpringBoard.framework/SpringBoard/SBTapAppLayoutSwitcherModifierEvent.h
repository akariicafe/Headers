@class SBAppLayout;

@interface SBTapAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppLayout:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;

@end
