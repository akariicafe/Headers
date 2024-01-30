@interface DEVariableBoolean : DEVariable

- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (id)initWithName:(id)a0 value:(BOOL)a1;
- (void)setValue:(BOOL)a0;
- (BOOL)getValue;

@end
