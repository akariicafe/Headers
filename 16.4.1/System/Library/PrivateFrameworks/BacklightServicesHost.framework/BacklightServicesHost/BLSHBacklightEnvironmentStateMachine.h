@class NSMutableArray, NSSet, NSString, BLSHBacklightEnvironmentPresentation, NSMapTable, NSMutableSet, BLSHPresentationDateSpecifier;
@protocol BLSHBacklightEnvironmentStateMachineDelegate, BLSHInactiveBudgetPolicing_Private, BLSHOSTimerProviding;

@interface BLSHBacklightEnvironmentStateMachine : NSObject <BLSHEnvironmentTransitionStateDelegate, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSHBacklightEnvironmentPresentation *_lock_presentation;
    NSMapTable *_transitionStates;
    NSMutableSet *_lock_updatingVisualStateTransitionStates;
    NSMutableSet *_lock_updatingDateSpecifierTransitionStates;
    BLSHPresentationDateSpecifier *_updatingSpecifier;
    NSMutableArray *_performEventHistory;
    NSMutableArray *_didBeginUpdateHistory;
    NSMutableArray *_didCompleteUpdateHistory;
    long long _lock_targetBacklightState;
    long long _lock_performEventTargetBacklightState;
    int _lock_addingEnvironmentsCount;
    BOOL _pendingNotifyBeganUpdatingState;
    BOOL _updatingState;
    BOOL _updatingPresentation;
    BOOL _lock_invalidated;
    unsigned long long _stateHandler;
}

@property (readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly, weak, nonatomic) id<BLSHBacklightEnvironmentStateMachineDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *updatingVisualStateTransitionStates;
@property (readonly, copy, nonatomic) NSSet *updatingDateSpecifierTransitionStates;
@property (readonly, nonatomic) BOOL pendingNotifyBeganUpdatingState;
@property (readonly, nonatomic, getter=isUpdatingState) BOOL updatingState;
@property (readonly, nonatomic, getter=isUpdatingPresentation) BOOL updatingPresentation;
@property (readonly, nonatomic) id<BLSHInactiveBudgetPolicing_Private> inactiveBudgetPolicy;
@property (readonly, nonatomic) id<BLSHOSTimerProviding> osTimerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPresentation:(id)a0 withTargetBacklightState:(long long)a1;
- (void)transitionState:(id)a0 didCompleteUpdateToBacklightState:(long long)a1 visualState:(id)a2;
- (void)transitionState:(id)a0 didBeginUpdateToBacklightState:(long long)a1 visualState:(id)a2;
- (void)updateToSpecifier:(id)a0;
- (void)populateEnvironmentStateMachineStruct:(struct { unsigned char x0 : 1; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x3; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x4; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x6; unsigned int x7; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x8; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x9; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x10; struct { unsigned char x0 : 1; unsigned int x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x11; int x12; int x13; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; } *)a0;
- (void)transitionState:(id)a0 didUpdateToDateSpecifier:(id)a1;
- (void)updateEnvironment:(id)a0;
- (void)updateAllEnvironmentsInPresentation;
- (void)dealloc;
- (void)performEvent:(id)a0 withInitialSpecifier:(id)a1 performBacklightRamp:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0 backlightState:(long long)a1 delegate:(id)a2 inactiveBudgetPolicy:(id)a3 osTimerProvider:(id)a4;

@end
