@class UIViewPropertyAnimator, SSBlurView, _SSSFlashSuperColorView;

@interface SSBlurringFlashView : SSFlashView {
    id /* block */ _completionBlock;
    SSBlurView *_blurView;
    _SSSFlashSuperColorView *_superColorView;
    UIViewPropertyAnimator *_superColorViewOpacityAnimator;
    UIViewPropertyAnimator *_blurViewRadiusAnimator;
    BOOL _isCompletingFlashWithNewTimingParameters;
    BOOL _superColorViewBackgroundColorAnimatorCompleted;
    BOOL _blurViewRadiusAnimatorCompleted;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)a0;

- (void)_setCornerRadius:(double)a0;
- (double)_cornerRadius;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flashWithCompletion:(id /* block */)a0;
- (void)_blurViewRadiusAnimatorCompleted;
- (void)_superColorViewBackgroundColorAnimatorCompleted;
- (void)_runCompletionBlockIfAppropriate;

@end
