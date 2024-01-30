@class SBAppLayout;

@interface SBiPadOSWindowModeChangeTransitionModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;

- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
