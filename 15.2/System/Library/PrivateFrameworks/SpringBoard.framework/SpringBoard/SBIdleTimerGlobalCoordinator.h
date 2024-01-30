@class NSString, SBIdleTimerCoordinatorHelper, SBIdleTimerProxy, NSMutableDictionary, SBIdleTimerDescriptor, SBIdleTimerDescriptorFactory, PTTestRecipe, SBIdleTimerGlobalStateMonitor, FBSDisplayLayoutMonitor;
@protocol SBIdleTimerProviding, SBIdleTimer, SBIdleTimerGlobalCoordinatorDelegate, BSInvalidatable, SBIdleTimerResetSource;

@interface SBIdleTimerGlobalCoordinator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerCoordinating> {
    SBIdleTimerDescriptorFactory *_idleTimerDescriptorFactory;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    SBIdleTimerProxy *_idleTimerProxy;
    SBIdleTimerDescriptor *_disabledIdleTimerDescriptor;
    SBIdleTimerProxy *_enabledIdleTimerProxy;
    SBIdleTimerDescriptor *_enabledIdleTimerDescriptor;
    BOOL _idleTimerSourceEnabled;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    id<BSInvalidatable> _disableAutoDimAssertion;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BOOL _started;
    id<SBIdleTimerResetSource> _lastResetSource;
    id<BSInvalidatable> _stateCaptureAssertion;
    PTTestRecipe *_clientDisableAssertionsTestRecipe;
    PTTestRecipe *_internalDisableAssertionsTestRecipe;
}

@property (readonly, nonatomic) id<SBIdleTimer> idleTimer;
@property (weak, nonatomic, getter=_idleTimerProvider, setter=_setIdleTimerProvider:) id<SBIdleTimerProviding> idleTimerProvider;
@property (retain, nonatomic, getter=_idleTimerDisableAssertions, setter=_setIdleTimerDisableAssertions:) NSMutableDictionary *idleTimerDisableAssertions;
@property (weak, nonatomic) id<SBIdleTimerGlobalCoordinatorDelegate> delegate;
@property (readonly, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;

- (BOOL)_updateIdleTimerForReason:(id)a0;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)_addStateCaptureHandlers;
- (void)resetIdleTimer;
- (void)idleTimerDidRefresh:(id)a0;
- (void)idleTimerDidResetForUserAttention:(id)a0;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void)_updateGlobalStateDisableAssertions;
- (void)_idleTimerPrefsChanged;
- (void)resetIdleTimerIfNonConsecutiveSource:(id)a0 forReason:(id)a1;
- (void)idleTimerGlobalStateMonitor:(id)a0 changedForReason:(id)a1;
- (id)_updateIdleTimerForProvider:(id)a0 behavior:(id)a1 descriptor:(id)a2 forReason:(id)a3;
- (void)start;
- (id)_updateIdleTimerForProvider:(id)a0 behavior:(id)a1 forReason:(id)a2;
- (void)_registerTestRecipes;
- (void)_setIdleTimerSourceEnabled:(BOOL)a0 forReason:(id)a1;
- (void).cxx_destruct;
- (void)_registerInternalDisableAssertionsTestRecipe;
- (id)init;
- (void)_registerClientDisableAssertionsTestRecipe;
- (void)_applyActiveIdleTimerDescriptorForReason:(id)a0;
- (void)_unregisterTestRecipes;
- (void)dealloc;
- (void)resetIdleTimerForReason:(id)a0;
- (BOOL)_areIdleTimerDisableAssertionsPrevented;
- (BOOL)_hasIdleTimerDisableAssertions;
- (void)_setIdleTimerWithDescriptor:(id)a0 forReason:(id)a1;
- (id)acquireIdleTimerDisableAssertionForReason:(id)a0;
- (void)_logEffectiveLockTimeout;
- (id)_activeIdleTimerProvider;
- (id)_stateCaptureDescription;

@end
