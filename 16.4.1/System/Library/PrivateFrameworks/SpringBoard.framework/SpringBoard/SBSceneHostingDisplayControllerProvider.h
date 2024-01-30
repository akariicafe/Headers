@class FBWorkspaceEventQueue, NSString, NSMutableDictionary, NSMutableSet, SBDisplayTransformerRegistry, SBDisplayManager, NSMapTable;
@protocol SBWindowingModeResolverFactory, SBSceneHostingDisplayControllerPolicyFactory, BSInvalidatable;

@interface SBSceneHostingDisplayControllerProvider : NSObject <SBDisplayManagerObserver, FBSDisplayTransformer, SBDisplayWindowingModeResolverDelegate, SBDisplayControllerProviding> {
    SBDisplayTransformerRegistry *_transformerRegistry;
    id<BSInvalidatable> _transformerToken;
    SBDisplayManager *_displayManager;
    id<BSInvalidatable> _displayManagerObserverToken;
    id<SBWindowingModeResolverFactory> _resolverFactory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_capableRootDisplaysToResolverMap;
    NSMutableSet *_lock_derivedDisplaysAwaitingConnection;
    NSMapTable *_lock_rootDisplaysToControllerMap;
    id<SBSceneHostingDisplayControllerPolicyFactory> _policyFactory;
    FBWorkspaceEventQueue *_workspaceEventQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resolver:(id)a0 rootDisplay:(id)a1 didUpdateAvailability:(BOOL)a2;
- (void)displayManager:(id)a0 didDisconnectIdentity:(id)a1;
- (void)displayManager:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (id)transformDisplayConfiguration:(id)a0;
- (void)dealloc;
- (id)displayControllerInfoForConnectingDisplay:(id)a0 configuration:(id)a1;
- (id)initWithTransformerRegistry:(id)a0 displayManager:(id)a1 workspaceEventQueue:(id)a2 displayModeResolverFactory:(id)a3 policyFactory:(id)a4;
- (void).cxx_destruct;

@end
