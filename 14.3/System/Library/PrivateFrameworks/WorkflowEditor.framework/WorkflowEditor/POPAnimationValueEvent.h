@interface POPAnimationValueEvent : POPAnimationEvent

@property (retain, nonatomic) id velocity;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 time:(double)a1 value:(id)a2;
- (void)_appendDescription:(id)a0;

@end
