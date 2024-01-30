@class PLOperator;

@interface PLHIDEventOperatorComposition : NSObject

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient { } *eventSystemClient;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 forUsagePage:(unsigned long long)a1 andUsage:(unsigned long long)a2 withBlock:(id /* block */)a3;

@end
