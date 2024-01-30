@class NSString;

@interface SXMoveInComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>

@property (nonatomic) double startXOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;
- (void)finishAnimation;

@end
