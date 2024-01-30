@class NSDictionary, NSArray, SBAppLayout;

@interface SBContinuousExposeAppToAppModifier : SBTransitionSwitcherModifier {
    NSArray *_displayItemsChangingSize;
}

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) long long fromInterfaceOrientation;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;
@property (readonly, nonatomic) long long toInterfaceOrientation;
@property (readonly, copy, nonatomic) NSDictionary *fromDisplayItemLayoutAttributesMap;
@property (readonly, copy, nonatomic) NSDictionary *toDisplayItemLayoutAttributesMap;
@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition;
@property (nonatomic, getter=isCommandTabTransition) BOOL commandTabTransition;
@property (nonatomic, getter=isLaunchingFromDockTransition) BOOL launchingFromDockTransition;
@property (nonatomic, getter=isMorphFromInAppViewTransition) BOOL morphFromInAppViewTransition;
@property (nonatomic) BOOL isTopAffordanceMenuTransition;

- (BOOL)asyncRenderingDisabled;
- (id)transitionWillBegin;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)didMoveToParentModifier:(id)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)_layoutSettings;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 fromInterfaceOrientation:(long long)a2 toAppLayout:(id)a3 toInterfaceOrientation:(long long)a4 fromDisplayItemLayoutAttributesMap:(id)a5 toDisplayItemLayoutAttributesMap:(id)a6;

@end
