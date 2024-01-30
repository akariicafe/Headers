@class SBAppLayout;

@interface SBRevealContinuousExposeStripsGestureModifier : SBGestureSwitcherModifier {
    double _progress;
}

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;

- (double)continuousExposeStripProgress;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 initialAppLayout:(id)a1;

@end
