@class FIUIState, NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FIUIStateMachine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_states;
    FIUIState *_state;
    FIUIState *_initialState;
    BOOL _handlingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_queueKey;
    NSMutableArray *_transitionalEvents;
    NSMutableSet *_parentStates;
}

@property long long pendingEvent;
@property (retain, nonatomic) NSString *label;
@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ diagnosticHandler;
@property (copy) id /* block */ transitionalEventFilter;

- (id)state;
- (void)addState:(id)a0;
- (void)dealloc;
- (id)queue;
- (id)description;
- (void).cxx_destruct;
- (void)addStates:(id)a0;
- (id)graphDescription;
- (void)event:(long long)a0;
- (void)_queue_setInitialStateIfNeeded:(id)a0;
- (void)_queue_handleEvents;
- (void)_queue_processEvent:(long long)a0;
- (void)addChildStates:(id)a0 toState:(id)a1 withEntryState:(id)a2;
- (void)eventAsync:(long long)a0;
- (void)export;
- (id)initWithLabel:(id)a0 queue:(id)a1;

@end
