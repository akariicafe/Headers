@class NSCountedSet, NSString, NSMutableDictionary, NSMutableArray, NSMutableSet, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, BSInvalidatable, PSPointerClientControllerDelegate;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSServiceConnection *_nonLaunchingConnection;
    BSServiceConnection *_launchingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_persistentPointerHideReasons;
    NSCountedSet *_persistentPointerShowReasons;
    NSMutableArray *_serviceKeepAliveAssertions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationAndConfigurationLock;
    BOOL _hasActivatedLaunchingConnection;
    BOOL _isConnectionActive;
    id<BSInvalidatable> _systemPointerInteractionContextIDAssertion;
    NSMutableSet *_accessQueue_validPortalSourceCollections;
    NSMutableSet *_accessQueue_validMatchMoveSources;
}

@property (retain, nonatomic) NSMutableDictionary *systemPointerInteractionContextIDs;
@property (weak, nonatomic) id<PSPointerClientControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isClientInteractionEnabled) BOOL clientInteractionEnabled;
@property (readonly, nonatomic) long long clientInteractionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autohidePointerForReason:(unsigned long long)a0;
- (void)createContentMatchMoveSourcesForDisplayUUID:(id)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)invalidatedPortalSourceCollections:(id)a0 matchMoveSources:(id)a1;
- (id)_connectionQueue_launchingConnection;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (void)invalidateContentMatchMoveSources:(id)a0 completion:(id /* block */)a1;
- (void)invalidatePointerPortalSourceCollection:(id)a0 completion:(id /* block */)a1;
- (void)createPointerPortalSourceCollectionForDisplayUUID:(id)a0 completion:(id /* block */)a1;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)a0;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (void)setActiveHoverRegion:(id)a0 transitionCompletion:(id /* block */)a1;
- (void)createPointerPortalSourceCollectionWithCompletion:(id /* block */)a0;
- (void)_createContentMatchMoveSourcesForDisplay:(id)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)acquireServiceKeepAliveAssertion;
- (void)_main_notifyDelegateOfInvalidatedRemoteSourcesSpecificallyThesePortalSourceCollections:(id)a0 matchMoveSources:(id)a1;
- (id)persistentlyShowPointerAssertionForReason:(unsigned long long)a0;
- (void)_createPointerPortalSourceCollectionForDisplay:(id)a0 completion:(id /* block */)a1;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (oneway void)clientInteractionStateDidChange:(id)a0;
- (id)init;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)a0 velocity:(id)a1 inContextID:(id)a2 cursorRegionLookupRadius:(id)a3 cursorRegionLookupResolution:(id)a4 lookupConeAngle:(id)a5 completion:(id /* block */)a6;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setSystemCursorInteractionContextID:(unsigned int)a0;
- (id)setSystemPointerInteractionContextID:(unsigned int)a0 displayUUID:(id)a1;
- (void)invalidate;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (void)sharedInit;
- (void).cxx_destruct;

@end
