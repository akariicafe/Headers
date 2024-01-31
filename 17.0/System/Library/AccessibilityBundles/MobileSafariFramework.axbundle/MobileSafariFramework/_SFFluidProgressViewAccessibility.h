@interface _SFFluidProgressViewAccessibility : ___SFFluidProgressViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)fluidProgressController:(id)a0 startFluidProgressBar:(id)a1 animateFillFade:(BOOL)a2;
- (void)_finishProgressBarWithDuration:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressBarBoundsForValue:(double)a0;
- (void)fluidProgressController:(id)a0 setProgressToCurrentPosition:(id)a1;
- (void)fluidProgressControllerFinishProgressBar:(id)a0 animateFillFade:(BOOL)a1;
- (void)fluidProgressController:(id)a0 updateFluidProgressBar:(id)a1 completion:(id /* block */)a2;
- (void)_axCheckProgress;
- (void)_axHandleProgressComplete;
- (void)_axHandleProgressStart:(id)a0;
- (id)_axProgressTimer;
- (void)_axSetProgressTimer:(id)a0;

@end
