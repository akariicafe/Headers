@interface UIViewInProcessAnimationState : UIViewAnimationState

@property (copy, nonatomic) id /* block */ animationAndComposerGetter;
@property (nonatomic) BOOL retargeted;
@property (nonatomic) long long type;

- (BOOL)isKeySupported:(id)a0;
- (void)animatePropertyWithCurrentValue:(id)a0 targetValue:(id)a1 preTickShouldRemoveCallback:(id /* block */)a2 newValueCallback:(id /* block */)a3 removedCallback:(id /* block */)a4 animatableProperty:(id)a5;
- (BOOL)shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)animatePropertyWithKey:(id)a0 view:(id)a1 forceNew:(BOOL)a2 currentValue:(id)a3 targetValue:(id)a4 preTickShouldRemoveCallback:(id /* block */)a5 newValueCallback:(id /* block */)a6 removedCallback:(id /* block */)a7;
- (id)actionForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;
- (void)setupWithDuration:(double)a0 delay:(double)a1 view:(id)a2 options:(unsigned long long)a3 factory:(id)a4 parentState:(id)a5 start:(id /* block */)a6 completion:(id /* block */)a7;

@end
