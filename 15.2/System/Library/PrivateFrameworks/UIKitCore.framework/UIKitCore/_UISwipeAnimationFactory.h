@interface _UISwipeAnimationFactory : NSObject

+ (id)animatorForTentativeWithOccurrence:(id)a0 additivelyAnimatedViews:(id)a1;
+ (id)animatorForCollapseWithAdditivelyAnimatedViews:(id)a0;
+ (id)animatorForGenericUpdates;
+ (id)animatorForMoveWithOccurrence:(id)a0;
+ (id)_animatorForStiffnessFactor:(double)a0 initialVelocity:(struct CGVector { double x0; double x1; })a1;
+ (id)animatorForCollapse;
+ (id)_animatorForDuration:(double)a0 initialVelocity:(struct CGVector { double x0; double x1; })a1 shouldLayoutSubviews:(BOOL)a2;
+ (id)animatorForTentativeWithOccurrence:(id)a0;
+ (id)animatorForScanlineCollapse;

@end
