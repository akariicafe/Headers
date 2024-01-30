@class NSString;

@interface SXScaleComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startAnimation;
- (void)finishAnimation;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;

@end
