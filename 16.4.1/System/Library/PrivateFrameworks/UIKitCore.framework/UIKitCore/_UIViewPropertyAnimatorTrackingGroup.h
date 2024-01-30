@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>

@property (readonly, nonatomic) NSArray *trackingAnimators;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isReversed) BOOL reversed;
@property (nonatomic) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (id)initWithAnimators:(id)a0;
- (void)continueAnimationWithTimingParameters:(id)a0 durationFactor:(double)a1;
- (void)startAnimationAfterDelay:(double)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)addCompletion:(id /* block */)a0;
- (void)pauseAnimation;
- (void)stopAnimation:(BOOL)a0;
- (void).cxx_destruct;

@end
