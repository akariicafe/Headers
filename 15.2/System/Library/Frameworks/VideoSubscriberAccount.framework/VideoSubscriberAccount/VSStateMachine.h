@class VSOptional, NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray;
@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject {
    int _mode;
}

@property (retain, nonatomic) NSOperationQueue *transitionQueue;
@property (retain, nonatomic) VSOptional *currentState;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions;
@property (retain, nonatomic) NSMutableDictionary *transitionTable;
@property (retain, nonatomic) NSMutableDictionary *ignoredEventsByState;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSStateMachineDelegate> delegate;

- (void)enqueueEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_exitingState:(id)a0;
- (void)_enteringState:(id)a0;
- (void)_setDestinationState:(id)a0 forEvent:(id)a1 inState:(id)a2 ignoringEvent:(BOOL)a3;
- (void)_handleEnqueuedTransitions;
- (void)ignoreEvent:(id)a0 inState:(id)a1;
- (void)setDestinationState:(id)a0 forEvent:(id)a1 inState:(id)a2;
- (void)activateWithState:(id)a0;

@end
