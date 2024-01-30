@interface DEVariableArray : DEVariable

- (void)addItem:(id)a0;
- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (id)getItem:(unsigned long long)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)getLength;

@end
