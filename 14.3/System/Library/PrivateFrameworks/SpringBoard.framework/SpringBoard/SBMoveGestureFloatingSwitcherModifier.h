@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

@property (nonatomic) long long initialFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGPoint { double x; double y; } translation;

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (double)shadowOpacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (id)handleGestureEvent:(id)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (id)initWithGestureID:(id)a0 initialFloatingConfiguration:(long long)a1 interfaceOrientation:(long long)a2;

@end
