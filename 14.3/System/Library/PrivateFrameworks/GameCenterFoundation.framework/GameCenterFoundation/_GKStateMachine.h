@class NSString, NSDictionary;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSString *currentState;
@property (retain) NSDictionary *validTransitions;
@property (weak) id<_GKStateMachineDelegate> delegate;
@property (nonatomic) BOOL shouldLogStateTransitions;

- (id)missingTransitionFromState:(id)a0 toState:(id)a1;
- (id)_validateTransitionFromState:(id)a0 toState:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_performTransitionFromState:(id)a0 toState:(id)a1;
- (BOOL)applyState:(id)a0;
- (BOOL)_setCurrentState:(id)a0;

@end
