@interface SXFadeComponentAnimationHandler : SXComponentAnimationHandler

- (void)startAnimation;
- (double)initialAlpha;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;
- (void)finishAnimation;

@end
