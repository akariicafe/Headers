@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

@property (nonatomic) long long initialFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) BOOL hideSlideOverTongueForDragFromStashedConfiguration;

- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)slideOverTongueState;
- (unsigned long long)slideOverTongueDirection;
- (id)appLayoutToAttachSlideOverTongue;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)handleGestureEvent:(id)a0;
- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (id)initWithGestureID:(id)a0 initialFloatingConfiguration:(long long)a1 interfaceOrientation:(long long)a2;

@end
