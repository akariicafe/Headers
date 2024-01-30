@class NSString, HKStateMachineState;

@interface HKStateMachineTransition : NSObject

@property (readonly, nonatomic) long long event;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, weak, nonatomic) HKStateMachineState *fromState;
@property (readonly, weak, nonatomic) HKStateMachineState *toState;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEvent:(long long)a0 label:(id)a1 from:(id)a2 to:(id)a3;

@end
