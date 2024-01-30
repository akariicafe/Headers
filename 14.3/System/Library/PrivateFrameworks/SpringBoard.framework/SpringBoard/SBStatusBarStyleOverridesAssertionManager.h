@class SBStatusBarTapManager, NSString, FBWorkspaceEventQueue, NSMutableArray, NSObject, NSXPCListener, NSMapTable, SBAppStatusBarAssertionManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding> {
    NSMutableArray *_runningUpdateTransactions;
}

@property (retain, nonatomic) SBAppStatusBarAssertionManager *appStatusBarAssertionManager;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property (retain, nonatomic) NSMapTable *assertionsByStyleOverride;
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic) int exclusiveStatusBarStyleOverrides;
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setStatusString:(id)a0 forAssertionWithIdentifier:(id)a1;
- (id)_internalQueue_coordinatorClientForStyleOverrides:(int)a0;
- (void)statusBarAssertionManager:(id)a0 statusBarSettingsDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_internalQueue_coordinatorClientForConnection:(id)a0;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)a0;
- (void)activateStatusBarStyleOverridesAssertions:(id)a0 reply:(id /* block */)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_postStatusStringsByStyle:(id)a0;
- (BOOL)handleTapForStatusBarStyleOverride:(int)a0;
- (void)setRegisteredOverrides:(id)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)a0 removedStyleOverrides:(int)a1;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)_invalidateAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)a0;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)a0 withHandler:(id /* block */)a1;
- (void)updateForegroundApplicationSceneHandles:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)a0 inactiveAssertionsByStyleOverride:(id)a1;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0;
- (BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)a0 onConnection:(id)a1;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)a0;

@end
