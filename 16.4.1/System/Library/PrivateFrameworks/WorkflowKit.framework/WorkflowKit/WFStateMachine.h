@class WFDispatchSourceTimer, NSMutableArray, NSObject;
@protocol WFState, OS_dispatch_queue, OS_os_activity;

@interface WFStateMachine : NSObject

@property (retain) id<WFState> currentState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transitionLock;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) WFDispatchSourceTimer *timer;
@property (readonly, nonatomic) NSMutableArray *eventHistory;
@property (nonatomic) BOOL blocksTransitionsOnInvalidation;
@property (nonatomic) BOOL silentlyDropInvalidTransitions;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)lock_addTransitionEventToHistoryWithState:(id)a0 reason:(id)a1 valid:(BOOL)a2;
- (void)lock_cancelPendingTimers;
- (BOOL)lock_prepareForInvalidation;
- (id)lock_printedEventHistory;
- (BOOL)transitionToState:(id)a0 withReason:(id)a1;

@end
