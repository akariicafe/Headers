@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject {
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
}

@property (retain) PFStateMachineNode *initialNode;

- (id)dot:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)transitionForEventName:(id)a0;
- (void)addGlobalTransition:(id)a0;
- (void)addGlobalTransitionOn:(id)a0 to:(id)a1;
- (id)findNodeWithName:(id)a0;
- (id)addNode:(id)a0;

@end
