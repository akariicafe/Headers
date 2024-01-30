@interface DEVariableObject : DEVariable

- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (void)addProperty:(id)a0;
- (id)getValue:(id)a0;
- (id)getValues;
- (id)initWithName:(id)a0;

@end
