@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;

- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (id)initWithName:(id)a0 string:(id)a1;
- (id)initWithName:(id)a0 print:(id)a1 speak:(id)a2;
- (void)setValuePrint:(id)a0 speak:(id)a1;

@end
