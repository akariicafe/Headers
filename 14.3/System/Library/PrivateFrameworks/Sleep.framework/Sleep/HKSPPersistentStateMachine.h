@class NSString, HKSPPersistentStateMachineState;
@protocol HKSPStatePersistence;

@interface HKSPPersistentStateMachine : HKSPStateMachine

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<HKSPStatePersistence> persistence;
@property (readonly, nonatomic) HKSPPersistentStateMachineState *currentState;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;

- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (BOOL)enterState:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3;
- (id)_persistedStateShouldIgnoreExpiration:(BOOL)a0;
- (id)persistedState;
- (id)persistedStateIgnoringExpiration;

@end
