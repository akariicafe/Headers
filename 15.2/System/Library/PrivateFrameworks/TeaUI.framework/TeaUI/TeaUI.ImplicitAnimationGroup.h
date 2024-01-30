@interface TeaUI.ImplicitAnimationGroup : NSObject <UIViewAnimating, UIViewImplicitlyAnimating> {
    void /* unknown type, empty encoding */ animators;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL reversed;
@property (nonatomic) double fractionComplete;

- (void)startAnimationAfterDelay:(double)a0;
- (void)continueAnimationWithTimingParameters:(id)a0 durationFactor:(double)a1;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)startAnimation;
- (BOOL)isReversed;
- (void)addCompletion:(id /* block */)a0;
- (void)pauseAnimation;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)init;

@end
