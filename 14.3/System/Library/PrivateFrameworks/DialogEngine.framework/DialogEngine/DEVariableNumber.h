@interface DEVariableNumber : DEVariable

- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (id)initWithName:(id)a0 value:(double)a1;
- (void)setValue:(double)a0;
- (double)getValue;

@end
