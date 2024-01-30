@interface UIInputSetHostView : UIView

+ (BOOL)requiresConstraintBasedLayout;
+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;

- (void)layoutIfNeeded;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (void)_updateSafeAreaInsets;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (int)textEffectsVisibilityLevel;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
