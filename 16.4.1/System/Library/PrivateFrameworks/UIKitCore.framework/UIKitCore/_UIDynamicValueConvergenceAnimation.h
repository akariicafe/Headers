@interface _UIDynamicValueConvergenceAnimation : _UIDynamicAnimation {
    id /* block */ _applier;
}

@property (nonatomic) double value;
@property (nonatomic) double targetValue;
@property (nonatomic) double convergenceRate;
@property (nonatomic) double minimumDifference;

- (void).cxx_destruct;
- (void)runWithValueApplier:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)_animateForInterval:(double)a0;
- (id)initWithValue:(double)a0 targetValue:(double)a1 convergenceRate:(double)a2 minimumDifference:(double)a3;

@end
