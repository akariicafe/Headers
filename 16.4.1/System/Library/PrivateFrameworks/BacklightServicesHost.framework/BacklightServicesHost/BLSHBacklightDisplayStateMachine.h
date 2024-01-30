@class NSString;
@protocol BLSHBacklightDisplayStateMachineDelegate, BLSHBacklightOSInterfaceProviding, BSInvalidatable;

@interface BLSHBacklightDisplayStateMachine : NSObject <BLSCBDisplayStateDelegate, BLSHWatchdogDelegate> {
    id<BSInvalidatable> _watchdogTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHBacklightOSInterfaceProviding> _osInterface;
    int _lock_sequenceNumber;
    struct { int sequenceNumber; long long displayMode; long long previousDisplayMode; double duration; double startSeconds; long long phase; } _lock_displayRampOperation;
    long long _lock_prewarmingDisplayMode;
    long long _lock_lastSteadyStateDisplayMode;
    long long _lock_completedCBDisplayMode;
    struct { int sequenceNumber; long long cbDisplayMode; long long previousCBDisplayMode; double duration; double fullDuration; double startSeconds; double effectiveStartSeconds; long long phase; BOOL shouldWait; } _lock_cbDisplayModeTransitionOperation;
    struct { int sequenceNumber; long long cbFlipbookState; long long phase; unsigned long long startTimestamp; } _lock_cbFlipbookStateChangeOperation;
    long long _lock_completedCBFlipbookState;
    unsigned long long _lock_updatingCA_startTimestamp;
    unsigned long long _lock_prewarmingDisplayMode_startTimestamp;
    BOOL _lock_updatingCA;
    BOOL _lock_isPrewarmingDisplayMode;
    unsigned long long _stateHandler;
}

@property (readonly, weak, nonatomic) id<BLSHBacklightDisplayStateMachineDelegate> delegate;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) long long lastSteadyStateDisplayMode;
@property (readonly, nonatomic, getter=isTransitioningDisplayMode) BOOL transitioningDisplayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 platformProvider:(id)a1 osInterfaceProvider:(id)a2;
- (void)setDisplayMode:(long long)a0 withRampDuration:(double)a1;
- (id)osInterfaceProvider;
- (id)identifier;
- (void)prewarmForDisplayMode:(long long)a0;
- (void)osInterfaceProvider:(id)a0 didCompleteSwitchToFlipbookState:(long long)a1 withError:(id)a2;
- (void)dealloc;
- (id)abortContext;
- (void)osInterfaceProvider:(id)a0 didCompleteTransitionToDisplayMode:(long long)a1 withError:(id)a2;
- (void).cxx_destruct;

@end
