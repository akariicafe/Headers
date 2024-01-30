@interface UIInputSetHostView : UIView

+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;
+ (BOOL)requiresConstraintBasedLayout;

- (void)layoutIfNeeded;
- (void)_updateSafeAreaInsets;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (int)textEffectsVisibilityLevel;

@end
