@class SBDisplayItem, SBAppLayout, SBContinuousExposeWindowDragContentSwitcherModifier, SBContinuousExposeWindowDragSwitcherModifier;

@interface SBContinuousExposeWindowDragContainerSwitcherModifier : SBFilteringSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBContinuousExposeWindowDragContentSwitcherModifier *windowDragContentSwitcherModifier;
@property (readonly, nonatomic) SBContinuousExposeWindowDragSwitcherModifier *windowDragModifier;

- (id)appLayoutOnStage;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)initWithAppLayouts:(id)a0 initialAppLayout:(id)a1 selectedDisplayItem:(id)a2 windowDragContentSwitcherModifier:(id)a3;

@end
