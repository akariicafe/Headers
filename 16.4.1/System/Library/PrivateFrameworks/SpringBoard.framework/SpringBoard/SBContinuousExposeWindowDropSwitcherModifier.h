@class SBDisplayItem, SBAppLayout;

@interface SBContinuousExposeWindowDropSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;

- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isLayoutRolePartOfWindowDragInteraction:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 selectedDisplayItem:(id)a1 toAppLayout:(id)a2;

@end
