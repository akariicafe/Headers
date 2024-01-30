@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startValue;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endValue;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } currentValue;

+ (id)animationWithEndingCGPointValue:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 timingFunction:(id)a2 completion:(id /* block */)a3;

- (id)_currentValue;
- (id)_endValue;
- (id)_startValue;
- (void)_setCurrentValue:(id)a0;
- (void)_setStartValue:(id)a0;
- (void)_setEndValue:(id)a0;
- (void)_updateWithProgress:(float)a0;
- (id)valueByAddingCurrentValueToValue:(id)a0;

@end
