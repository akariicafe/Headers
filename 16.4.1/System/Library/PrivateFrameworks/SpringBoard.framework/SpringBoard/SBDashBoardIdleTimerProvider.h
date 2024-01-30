@class NSString, NSMutableSet;
@protocol SBDashBoardIdleTimerProviderDelegate, SBFIdleTimerBehaviorProviding, SBIdleTimer, BSInvalidatable;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding> {
    id<SBFIdleTimerBehaviorProviding> _idleTimerProvider;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
}

@property (weak, nonatomic) id<SBDashBoardIdleTimerProviderDelegate> delegate;
@property (retain, nonatomic) id<SBIdleTimer> idleTimer;
@property (readonly, nonatomic, getter=isIdleTimerEnabled) BOOL idleTimerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetIdleTimer;
- (void)idleTimerDidWarn:(id)a0;
- (void)idleTimerDidExpire:(id)a0;
- (void)idleTimerDidRefresh:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_proposeIdleTimerBehavior:(id)a0 forReason:(id)a1;
- (void)updateIdleTimerWithIdleDimProvider:(id)a0 reason:(id)a1;
- (BOOL)isDisabledAssertionActiveForReason:(id)a0;
- (void)addDisabledIdleTimerAssertionReason:(id)a0;
- (void)_proposeEffectiveIdleTimerBehaviorForReason:(id)a0;
- (id)_copyIdleTimerBehaviorForBehaviorProvider:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)effectiveIdleTimerBehavior;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeDisabledIdleTimerAssertionReason:(id)a0;
- (void).cxx_destruct;

@end
