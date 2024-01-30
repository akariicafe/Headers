@interface ARUIAnimatableObjectPropertyAnimation : NSObject {
    id /* block */ _animationTimingFunction;
    double _currentAnimationTime;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic, setter=_setStartValue:) id _startValue;
@property (retain, nonatomic, setter=_setEndValue:) id _endValue;
@property (retain, nonatomic, setter=_setCurrentValue:) id _currentValue;

+ (id)animationWithDuration:(double)a0 timingFunction:(id /* block */)a1 completion:(id /* block */)a2;
+ (id /* block */)linearTimingFunction;
+ (id /* block */)timingFunctionForMediaTimingFunction:(id)a0;

- (void)update:(double)a0;
- (void).cxx_destruct;
- (BOOL)isFinishedAnimating;
- (void)callAndReleaseCompletionHandler;
- (void)_updateWithProgress:(float)a0;
- (id)valueByAddingCurrentValueToValue:(id)a0;

@end
