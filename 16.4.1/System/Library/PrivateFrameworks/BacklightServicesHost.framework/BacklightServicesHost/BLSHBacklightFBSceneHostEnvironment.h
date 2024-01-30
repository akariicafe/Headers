@class NSDate, NSString, RBSProcessIdentity, FBScene, BLSHAggregatedProcessAssertion, NSHashTable, BLSBacklightSceneVisualState, BLSHBacklightSceneClientSettingsDiffInspector;

@interface BLSHBacklightFBSceneHostEnvironment : NSObject <FBSceneObserver, BLSHBacklightSceneHostEnvironment> {
    FBScene *_fbScene;
    BLSHBacklightSceneClientSettingsDiffInspector *_lock_diffInspector;
    NSString *_nilSceneIdentifier;
    BLSHAggregatedProcessAssertion *_lock_secondsFidelityAssertion;
    BLSHAggregatedProcessAssertion *_lock_renderSessionAssertion;
    RBSProcessIdentity *_budgetProcessIdentity;
    NSHashTable *_lock_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_renderSeed;
    unsigned int _lock_requestDateSpecifierFailureCount;
    BOOL _lock_shouldInvalidateWhenActivated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *identifier;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly) BOOL clientHasDelegate;
@property (readonly, getter=isClientActive) BOOL clientActive;
@property (readonly) BLSBacklightSceneVisualState *visualState;
@property (readonly) NSDate *presentationDate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (getter=isAlwaysOnEnabledForEnvironment) BOOL alwaysOnEnabledForEnvironment;
@property (getter=isLiveUpdating) BOOL liveUpdating;
@property (getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property (getter=isDisplayBlanked) BOOL displayBlanked;

+ (void)setAmendSceneSettingsDelegate:(id)a0;

- (void)updateToDateSpecifier:(id)a0 sceneContentsUpdated:(id /* block */)a1;
- (void)invalidateContentForReason:(id)a0;
- (void)willBeginRenderSession:(id)a0;
- (void)clearPresentationDate;
- (void)requestDateSpecifiersForDateInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 completion:(id /* block */)a3;
- (void)deactivateClient;
- (void)clientDidRequestInvalidationForReason:(id)a0;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)a0;
- (void)willEndRenderSession:(id)a0;
- (id)initWithFBScene:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)addObserver:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)updateToVisualState:(id)a0 presentationDateSpecifier:(id)a1 animated:(BOOL)a2 triggerEvent:(id)a3 touchTargetable:(BOOL)a4 sceneContentsUpdated:(id /* block */)a5 performBacklightRamp:(id /* block */)a6 animationComplete:(id /* block */)a7;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)amendSceneSettings:(id)a0;

@end
