@interface UIInputSetHostView : UIView

+ (BOOL)requiresConstraintBasedLayout;
+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;

- (void)layoutIfNeeded;
- (int)textEffectsVisibilityLevel;
- (void)_updateSafeAreaInsets;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
