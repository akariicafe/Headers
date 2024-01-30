@class NSString, NSSet, HKSPPersistentStateMachineState;
@protocol HKSPStatePersistence;

@interface HKSPPersistentStateMachine : HKSPStateMachine

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *allowedStates;
@property (readonly, nonatomic) id<HKSPStatePersistence> persistence;
@property (readonly, nonatomic) HKSPPersistentStateMachineState *currentState;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;

- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (id)persistedState;
- (void).cxx_destruct;
- (BOOL)enterState:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 allowedStates:(id)a1 persistence:(id)a2 delegate:(id)a3 infoProvider:(id)a4;
- (id)initWithIdentifier:(id)a0 allowedStates:(id)a1 persistence:(id)a2 delegate:(id)a3 infoProvider:(id)a4 currentDateProvider:(id /* block */)a5;
- (id)_persistedStateShouldIgnoreExpiration:(BOOL)a0;
- (id)initWithAllowedStates:(id)a0 delegate:(id)a1 infoProvider:(id)a2;
- (id)persistedStateIgnoringExpiration;

@end
