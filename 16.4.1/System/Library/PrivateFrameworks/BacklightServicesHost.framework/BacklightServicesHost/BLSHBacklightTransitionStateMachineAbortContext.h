@class NSString, BLSHBacklightMutableTargetState, BLSHPendingEnvironmentUpdateOperation, BLSHPendingUpdatePresentation, BLSHPendingUpdateToSpecifier, BLSBacklightChangeEvent, BLSHPendingUpdateDisplayMode, BLSHBacklightAggregateState, BLSHEnsureFlipbookCurrentOperation, BLSHBacklightEnvironmentStateMachine;

@interface BLSHBacklightTransitionStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    BLSHBacklightAggregateState *_currentState;
    BLSHBacklightMutableTargetState *_targetState;
    BLSHPendingEnvironmentUpdateOperation *_pendingEventToPerform;
    BLSHPendingUpdatePresentation *_pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier *_pendingUpdateToSpecifier;
    BLSHPendingUpdateDisplayMode *_pendingUpdateDisplayMode;
    BLSHEnsureFlipbookCurrentOperation *_ensureFlipbookCurrentOperation;
    BLSBacklightChangeEvent *_queuedEventToPerform;
    BLSBacklightChangeEvent *_pendingPrewarmedEvent;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    BOOL _sleepRequested;
    BOOL _sleepImminent;
    double _timeInSleepImminent;
}

@property (readonly, nonatomic) unsigned long long abortReason;
@property (readonly, nonatomic) const void *payload;
@property (readonly, nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent;
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)backlightChangeRequestExplanationIdentifierFromString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_populatePayload;
- (id)initWithCurrentState:(id)a0 targetState:(id)a1 pendingEventToPerform:(id)a2 pendingUpdatePresentation:(id)a3 pendingUpdateToSpecifier:(id)a4 pendingUpdateDisplayMode:(id)a5 ensureFlipbookCurrentOperation:(id)a6 queuedEventToPerform:(id)a7 pendingPrewarmedEvent:(id)a8 environmentStateMachine:(id)a9 sleepRequested:(BOOL)a10 sleepImminent:(BOOL)a11 timeInSleepImminent:(double)a12;
- (void)setSleepImminentAbortReason;

@end
