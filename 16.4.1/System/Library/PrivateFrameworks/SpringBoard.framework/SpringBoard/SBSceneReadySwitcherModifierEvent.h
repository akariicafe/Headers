@class SBAppLayout;

@interface SBSceneReadySwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppLayout:(id)a0;
- (void).cxx_destruct;

@end
