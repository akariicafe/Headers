@class NSString, NSMutableDictionary, NSMutableSet;

@interface FIUIState : NSObject {
    NSMutableDictionary *_transitions;
}

@property (readonly) NSString *label;
@property (copy) id /* block */ entry;
@property (copy) id /* block */ exit;
@property (getter=isTransitional) BOOL transitional;
@property (weak, nonatomic) FIUIState *parentState;
@property (readonly, nonatomic) NSMutableSet *childStates;
@property (weak, nonatomic) FIUIState *entryState;

+ (id)transitionalStateFromState:(id)a0 toState:(id)a1 entryEvent:(long long)a2 exitEvent:(long long)a3;
+ (id)stateWithLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)allTransitions;
- (void)registerTransition:(long long)a0 label:(id)a1 toState:(id)a2 handler:(id /* block */)a3 gate:(id /* block */)a4;
- (void)registerTransition:(long long)a0 label:(id)a1 toState:(id)a2;
- (void)enumerateEvents:(id /* block */)a0;
- (id)transitionForEvent:(long long)a0;
- (void)addChildStates:(id)a0 withEntryState:(id)a1;

@end
