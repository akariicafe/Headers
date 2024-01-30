@interface SBUISystemApertureLabel : UILabel

- (void)performTextSwapAnimationWithText:(id)a0 textColor:(id)a1 sizeWillChangeBlock:(id /* block */)a2;
- (void)_animateLayer:(id)a0 andSetValueForKeyPath:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (struct CGSize { double x0; double x1; })_sizeOfLabelWithNewText:(id)a0;
- (id)_springAnimationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;

@end
