@class SBGridSwipeUpGestureSwitcherModifier, SBDismissSiriSwitcherModifier;

@interface SBSwitcherSwipeUpGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {
    SBGridSwipeUpGestureSwitcherModifier *_gridSwipeUpGestureModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)contentViewScale;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
