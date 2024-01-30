@class BLSHDateSpecifierModel, NSString, BLSHOnSystemSleepAction, BLSHPresentationDateSpecifier, BLSHEngineRenderFlipbookSession, NSDateInterval, BLSHFlipbookSpecification, BLSHBacklightInactiveEnvironmentSession, BLSHPresentationUpdates, BLSHFlipbookHistory, BLSHEngineRequestDatesOperation;
@protocol BLSHInactiveBudgetPolicing_Private, BSTimerScheduleQuerying, BLSHRenderedFlipbookFrame, BLSHFlipbookTelemetry, BLSHPreventSystemSleepAsserting, BLSHAlwaysOnPresentationEngineDelegate, BLSHFlipbook, BSInvalidatable, BLSHOSInterfaceProviding;

@interface BLSHAlwaysOnPresentationEngine : NSObject <BLSHEngineRequestDatesOperationDelegate, BLSHEngineRenderFlipbookSessionDelegate, BLSHBacklightInactiveEnvironmentSessionObserving, BLSHOnSystemSleepActionDelegate, BLSHAlwaysFillFlipbookProvider, BLSHPseudoFlipbookProvider, BLSHBacklightSceneHostEnvironmentObserver, BLSFlipbookDiagnosticsProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHAlwaysOnPresentationEngineDelegate> _delegate;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    id<BLSHInactiveBudgetPolicing_Private> _inactiveBudgetPolicy;
    id<BLSHFlipbookTelemetry> _flipbookTelemetryDelegate;
    BLSHOnSystemSleepAction *_sleepAction;
    id /* block */ _lock_sleepActionCompletion;
    BLSHFlipbookSpecification *_flipbookSpecification;
    id<BLSHFlipbook> _lock_flipbook;
    id<BLSHRenderedFlipbookFrame> _lock_frameOnGlassWhenFlipbookLastCancelled;
    BLSHFlipbookHistory *_renderedFlipbookHistory;
    BLSHDateSpecifierModel *_lock_presentationDatesModel;
    BLSHBacklightInactiveEnvironmentSession *_lock_inactiveSession;
    BLSHEngineRequestDatesOperation *_lock_requestDatesOperation;
    BLSHPresentationDateSpecifier *_lock_lastLiveSpecifier;
    NSDateInterval *_lock_lastRequestInterval;
    BLSHPresentationUpdates *_lock_cachedFlipbookUpdates;
    BLSHPresentationDateSpecifier *_lock_renderingSpecifier;
    BLSHEngineRenderFlipbookSession *_lock_renderFlipbookSession;
    id<BLSHPreventSystemSleepAsserting> _lock_renderFlipbookSessionPowerAssertion;
    id<BLSHPreventSystemSleepAsserting> _lock_livePowerAssertion;
    id<BSTimerScheduleQuerying, BSInvalidatable> _lock_timer;
    unsigned long long _stateHandler;
    unsigned long long _lock_renderingSpecifier_backoffTime;
    long long _lock_engineState;
    long long _lock_fillFlipbookState;
    double _lock_sleepRequestedTime;
    BOOL _lock_shouldNotifyFlipbookCurrent;
    BOOL _lock_onStandby;
    BOOL _lock_suppressed;
    BOOL _lock_requestDatesOperationDidTimeout;
    BOOL _lock_alwaysFillFlipbook;
    BOOL _lock_usePseudoFlipbook;
    BOOL _lock_restrictedFramerate;
}

@property (readonly, nonatomic) long long engineState;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (nonatomic, getter=isOnStandby) BOOL onStandby;
@property (nonatomic) BOOL alwaysFillFlipbook;
@property (retain, nonatomic) BLSHBacklightInactiveEnvironmentSession *inactiveSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isUsingPseudoFlipbook) BOOL usePseudoFlipbook;

- (id)allFlipbookFrames;
- (void)hostEnvironment:(id)a0 hostDidSetUnrestrictedFramerateUpdates:(BOOL)a1;
- (void)registerHandlersForService:(id)a0;
- (id)frameWithUUID:(id)a0;
- (id)frameOnGlassNow;
- (void)systemSleepAction:(id)a0 performWithCompletion:(id /* block */)a1;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void)dealloc;
- (void)hostEnvironment:(id)a0 invalidateContentForReason:(id)a1;
- (void)didEndInactiveEnvironmentSession:(id)a0;
- (void)inactiveEnvironmentSession:(id)a0 didUpdateToPresentation:(id)a1;
- (void).cxx_destruct;
- (void)systemSleepAction:(id)a0 systemWillWakeForReason:(id)a1;
- (id)initWithDelegate:(id)a0 platformProvider:(id)a1 osInterfaceProvider:(id)a2 inactiveBudgetPolicy:(id)a3;
- (void)purgeFlipbook;
- (void)renderFramesSession:(id)a0 didRenderFrame:(id)a1 timedOutEnvironments:(id)a2;
- (void)renderFramesSession:(id)a0 failedToRenderSpecifier:(id)a1 error:(id)a2 timedOutEnvironments:(id)a3;
- (void)requestDatesOperation:(id)a0 didTimeoutPendingEnvironments:(id)a1;
- (void)requestDatesOperation:(id)a0 environment:(id)a1 didProvideSpecifiers:(id)a2 forPresentationInterval:(id)a3 isComplete:(BOOL)a4;
- (void)setUsePseudoFlipbook:(BOOL)a0;
- (void)startFlipbookAndEnsureCurrent;
- (void)startLiveUpdates;
- (id)stopForReason:(id)a0;
- (id)suspendForReason:(id)a0;

@end
