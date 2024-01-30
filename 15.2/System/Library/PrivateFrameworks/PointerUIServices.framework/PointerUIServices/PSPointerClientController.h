@class NSCountedSet, NSString, NSMutableArray, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, PSPointerClientControllerDelegate;

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
}

@property (nonatomic) unsigned int systemCursorInteractionContextID;
@property (weak, nonatomic) id<PSPointerClientControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isClientInteractionEnabled) BOOL clientInteractionEnabled;
@property (readonly, nonatomic) long long clientInteractionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acquireServiceKeepAliveAssertion;
- (void)createPointerPortalSourceCollectionWithCompletion:(id /* block */)a0;
- (void)setActiveHoverRegion:(id)a0 transitionCompletion:(id /* block */)a1;
- (void)invalidateContentMatchMoveSources:(id)a0 completion:(id /* block */)a1;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_connectionQueue_launchingConnection;
- (void).cxx_destruct;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (void)invalidatePointerPortalSourceCollection:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_didInvalidateRemoteSources;
- (oneway void)clientInteractionStateDidChange:(id)a0;
- (void)invalidate;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)a0;
- (void)autohidePointerForReason:(unsigned long long)a0;
- (id)persistentlyShowPointerAssertionForReason:(unsigned long long)a0;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)a0 velocity:(id)a1 inContextID:(id)a2 cursorRegionLookupRadius:(id)a3 cursorRegionLookupResolution:(id)a4 lookupConeAngle:(id)a5 completion:(id /* block */)a6;

@end
