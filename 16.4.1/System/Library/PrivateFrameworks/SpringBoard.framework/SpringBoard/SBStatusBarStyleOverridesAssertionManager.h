@class SBStatusBarTapManager, NSString, FBWorkspaceEventQueue, SBWindowSceneStatusBarAssertionManager, NSMutableArray, NSXPCListener, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBWindowSceneStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding> {
    NSMutableArray *_runningUpdateTransactions;
}

@property (retain, nonatomic) SBWindowSceneStatusBarAssertionManager *appStatusBarAssertionManager;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property (retain, nonatomic) NSMapTable *assertionsByStyleOverride;
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (nonatomic) unsigned long long statusBarStyleOverrides;
@property (nonatomic) unsigned long long exclusiveStatusBarStyleOverrides;
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)handleTapForStatusBarStyleOverride:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)setRegisteredOverrides:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)_internalQueue_removeAssertionByStyleOverrides:(id)a0;
- (void)setStatusString:(id)a0 forAssertionWithIdentifier:(id)a1;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)a0 withHandler:(id /* block */)a1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)a0 inactiveAssertionsByStyleOverride:(id)a1;
- (void)_invalidateAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(unsigned long long)a0 removedStyleOverrides:(unsigned long long)a1;
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)a0;
- (void)updateForegroundApplicationSceneHandles:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)a0 onConnection:(id)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)_internalQueue_addAssertionByStyleOverrides:(id)a0;
- (id)_internalQueue_coordinatorClientForConnection:(id)a0;
- (void)activateStatusBarStyleOverridesAssertions:(id)a0 reply:(id /* block */)a1;
- (id)_internalQueue_coordinatorClientForStyleOverrides:(unsigned long long)a0;
- (void)_postStatusStringsByStyle:(id)a0;
- (void).cxx_destruct;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)a0;

@end
