@class NSUUID, SBGestureSwitcherModifierEvent;

@interface SBGestureSwitcherModifier : SBSwitcherModifier {
    NSUUID *_gestureID;
    SBGestureSwitcherModifierEvent *_lastGestureEvent;
}

@property (readonly, nonatomic) unsigned long long gesturePhase;

- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)handleEvent:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;

@end
