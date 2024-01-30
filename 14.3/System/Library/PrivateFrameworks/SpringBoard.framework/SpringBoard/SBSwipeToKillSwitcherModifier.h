@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    double _progress;
    BOOL _hasPrepared;
    BOOL _simulatingPostRemovalState;
    unsigned long long _interpolationDirection;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)a0;
- (double)shadowOpacityForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (double)lighteningAlphaForIndex:(unsigned long long)a0;
- (double)darkeningAlphaForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (void)_calculateInterpolationDirection;
- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)a0;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)a0;

@end
