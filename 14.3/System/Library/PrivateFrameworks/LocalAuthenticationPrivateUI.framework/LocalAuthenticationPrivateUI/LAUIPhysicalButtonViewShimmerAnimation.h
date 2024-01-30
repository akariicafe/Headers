@class CAGradientLayer;

@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {
    CAGradientLayer *_shimmerGradient;
}

- (void).cxx_destruct;
- (double)duration;
- (void)endImmediately;
- (void)beginWithDelay:(double)a0;
- (BOOL)_isReducedMotionEnabled;
- (void)_beginReducedMotionAnimationWithDelay:(double)a0;
- (void)_beginRegularMotionAnimationWithDelay:(double)a0;
- (void)_endShimmerAnimation;

@end
