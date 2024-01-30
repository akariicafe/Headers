@class FBSDisplayConfiguration, CADisplay, FBSDisplayLayoutPublisher, SBApplicationSceneHandle, NSObject, FBSDisplayIdentity, FBScene, BSAtomicSignal, NSString, _UIRootWindow, CADisplayMode, SBApplication, SBSExternalDisplayLayoutElement;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBExternalDisplayPresenter : NSObject <SBSceneHandleObserver, BSInvalidatable> {
    FBSDisplayLayoutPublisher *_layoutPublisher;
    FBSDisplayIdentity *_identity;
    CADisplay *_caDisplay;
    BOOL _invalidated;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_currentReportedConfiguration;
    SBApplication *_foregroundApp;
    SBApplicationSceneHandle *_foregroundAppSceneHandle;
    FBScene *_foregroundAppScene;
    BSAtomicSignal *_foregroundAppSceneTransactionInvalidator;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    unsigned long long _displayMutationEnqueuedCount;
    unsigned long long _displayMutationCompletedCount;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    _UIRootWindow *_rootWindow;
    FBSDisplayConfiguration *_rootWindowConfiguration;
    SBApplicationSceneHandle *_presentationSceneHandle;
    FBScene *_presentationScene;
    BSAtomicSignal *_presentationSceneActivationInvalidator;
    BOOL _hasEnqueuedPresentationUpdate;
    BOOL _presentationSceneHasActivated;
    SBSExternalDisplayLayoutElement *_presentedLayoutElement;
    id<BSInvalidatable> _presentedLayoutElementAssertion;
    NSString *_preventIdleSleepReason;
    SBApplication *_preventIdleSleepApp;
    BOOL _preventIdleSleepPresenting;
    long long _powerMode;
    BSAtomicSignal *_idleOffTimerInvalidation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (id)initWithLayoutPublisher:(id)a0 displayConfiguration:(id)a1;
- (id)updateToConfiguration:(id)a0 withForegroundApp:(id)a1;
- (void)_setPreventIdleSleepForApp:(id)a0 presenting:(BOOL)a1;
- (id)_createUpdateTransaction;
- (void)_enqueuePresentationUpdate;
- (void)_ensureMode:(id)a0 overscanCompensation:(long long)a1;
- (void)_updateHostingIfNecessary;

@end
