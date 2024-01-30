@class NSString;

@interface PFStateMachineTransition : NSObject {
    id /* block */ _action;
}

@property (readonly) NSString *eventName;
@property (readonly) NSString *destinationName;

+ (id)transitionOn:(id)a0 to:(id)a1;
+ (id)transitionOn:(id)a0 to:(id)a1 action:(id /* block */)a2;
+ (id)returnTransitionOn:(id)a0;
+ (id)transitionOn:(id)a0 subflow:(id)a1 to:(id)a2;

- (void)performAction:(id)a0;
- (void).cxx_destruct;
- (id)destination:(id)a0;
- (id)dot:(id)a0 prefix:(id)a1 graph:(id)a2;
- (id)initWithEventName:(id)a0 to:(id)a1 action:(id /* block */)a2;
- (id)_dotReachableNodes:(id)a0;
- (id)description;
- (void)setAction:(id /* block */)a0;

@end
