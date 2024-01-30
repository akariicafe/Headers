@class NSString, NSMutableDictionary;

@interface PFStateMachineNode : NSObject {
    NSMutableDictionary *_transitions;
    id /* block */ _action;
}

@property (readonly) NSString *name;

+ (id)nodeWithName:(id)a0;

- (id)performAction:(id)a0;
- (void)setAction:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)addTransition:(id)a0;
- (id)transitionForEventName:(id)a0;
- (id)dot:(id)a0 prefix:(id)a1 graph:(id)a2;
- (id)_dotReachableNodes:(id)a0 graph:(id)a1;
- (id)addTransitionOn:(id)a0 to:(id)a1;
- (id)addTransitionOn:(id)a0 subflow:(id)a1 to:(id)a2;
- (id)addReturnTransitionOn:(id)a0;

@end
