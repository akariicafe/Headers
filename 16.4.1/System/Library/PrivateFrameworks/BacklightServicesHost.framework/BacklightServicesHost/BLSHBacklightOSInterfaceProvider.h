@class NSDate, NSString, BLSHSuppressionEvent, BSContinuousMachTimer, NSMutableDictionary, BLSHCriticalAssertProvider, NSObject, NSMutableSet, CBDisplayStateClient, BLSHWatchdogProvider, CMSuppressionManager;
@protocol OS_dispatch_queue, BLSHBacklightPlatformProvider, BLSCBDisplayStateDelegate;

@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider <CBDisplayStateClientDelegate, BLSHTransparentFlipbookProvider, BLSHBacklightOSInterfaceProviding> {
    id<BLSHBacklightPlatformProvider> _platformProvider;
    BLSHWatchdogProvider *_watchdogProvider;
    BLSHCriticalAssertProvider *_criticalAssertProvider;
    NSMutableDictionary *_lock_sceneObservers;
    NSMutableSet *_lock_sceneWorkspaces;
    BLSHSuppressionEvent *_lock_lastSuppressionEvent;
    CBDisplayStateClient *_displayStateClient;
    CMSuppressionManager *_suppressionManager;
    BSContinuousMachTimer *_setCBDisplayModeTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_cbDisplayMode;
    long long _lock_cbFlipbookState;
    BOOL _lock_suppressionServiceActive;
    BOOL _lock_caFlipbookEnabled;
    BOOL _lock_caFlipbookSuppressed;
    BOOL _lock_caBlanked;
    BOOL _lock_flipbookTransparent;
    BOOL _deviceSupportsAlwaysOn;
    BOOL _lock_kernelSpecialMode;
    BOOL _displayStateClientSupported;
    float _backlightDimmedFactor;
}

@property (class, retain) BLSHBacklightOSInterfaceProvider *sharedProvider;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFlipbookTransparent) BOOL flipbookTransparent;
@property (nonatomic, getter=isCABlanked, setter=setCABlanked:) BOOL caBlanked;
@property (nonatomic, getter=isCAFlipbookEnabled, setter=setCAFlipbookEnabled:) BOOL caFlipbookEnabled;
@property (nonatomic, getter=isCAFlipbookSuppressed, setter=setCAFlipbookSuppressed:) BOOL caFlipbookSuppressed;
@property (nonatomic, getter=isKernelAlwaysOnMode) BOOL kernelAlwaysOnMode;
@property (retain, setter=setCBDisplayStateDelegate:) id<BLSCBDisplayStateDelegate> cbDisplayStateDelegate;
@property (readonly, nonatomic) long long cbDisplayMode;
@property (readonly, nonatomic) BOOL supportsFlipbookState;
@property (readonly, nonatomic) long long cbFlipbookState;
@property (readonly, nonatomic, getter=isShowingBlankingWindow) BOOL showingBlankingWindow;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryFrameLimit;
@property (readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryMemoryLimit;
@property (readonly, nonatomic, getter=isSuppressionServiceActive) BOOL suppressionServiceActive;
@property (readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property (readonly, nonatomic) NSDate *now;

- (void)endSuppressionService;
- (id)createPowerAssertionWithIdentifier:(id)a0;
- (void)willUnblank;
- (void)transitionToDisplayMode:(long long)a0 withDuration:(double)a1;
- (id)systemSleepMonitor;
- (void)registerHandlersForService:(id)a0;
- (void)didCompleteTransitionToDisplayMode:(long long)a0 withError:(id)a1;
- (id)addSceneObserver:(id)a0 forSceneIdentityToken:(id)a1;
- (id)createSystemActivityAssertionWithIdentifier:(id)a0;
- (void)switchToFlipbookState:(long long)a0;
- (void)deregisterSceneWorkspace:(id)a0;
- (id)scheduleWatchdogWithDelegate:(id)a0 explanation:(id)a1 timeout:(double)a2;
- (void)registerSceneWorkspace:(id)a0;
- (void)didCompleteSwitchToFlipbookState:(long long)a0 withError:(id)a1;
- (id)removeSceneObserver:(id)a0 forSceneIdentityToken:(id)a1;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)a0 identifier:(id)a1 block:(id /* block */)a2;
- (void)didDetectSignificantUserInteraction;
- (void)setShowingBlankingWindow:(BOOL)a0 fadeDuration:(double)a1;
- (id)observeSignificantTimeChangeWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)sceneWithIdentityToken:(id)a0;
- (void)startSuppressionServiceWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)createFlipbook;
- (id)initWithPlatformProvider:(id)a0;

@end
