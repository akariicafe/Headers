@class SBSwitcherModifier, SBAppLayout;

@interface SBInlineGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } _fullScreenCornerRadii;
    BOOL _dimInactiveCards;
}

@property (readonly, nonatomic) SBAppLayout *fullScreenAppLayout;
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier;

- (id)visibleAppLayouts;
- (double)reopenClosedWindowsButtonScale;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenBackdropBlurProgress;
- (void).cxx_destruct;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (id)transitionWillBegin;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cardCornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isContainerStatusBarVisible;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)plusButtonAlpha;
- (double)homeScreenDimmingAlpha;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (long long)plusButtonStyle;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)_isIndexFullScreenAppLayout:(unsigned long long)a0;
- (double)_unselectedCardScale;
- (id)initWithTransitionID:(id)a0 fullScreenAppLayout:(id)a1 multitaskingModifier:(id)a2 fullscreenCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 dimInactiveCards:(BOOL)a4;

@end
