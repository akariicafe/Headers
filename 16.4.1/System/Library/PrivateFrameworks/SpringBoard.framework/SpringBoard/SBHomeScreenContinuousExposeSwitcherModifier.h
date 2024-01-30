@class SBHomeScreenSwitcherModifier, SBStripContinuousExposeSwitcherModifier;

@interface SBHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBStripContinuousExposeSwitcherModifier *_stripModifier;
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
}

- (double)continuousExposeStripProgress;
- (BOOL)isContainerStatusBarVisible;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isScrollEnabled;
- (long long)touchBehaviorForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
