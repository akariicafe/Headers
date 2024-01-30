@class NSHashTable, NSString, SBDisplayManager, BSServiceConnectionListener, NSObject, SBExternalDisplayDefaults, FBServiceClientAuthenticator, NSMutableArray;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBExternalDisplayService : NSObject <SBSExternalDisplayServiceClientToServerInterface, BSServiceConnectionListenerDelegate, SBDisplayManagerObserver> {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SBDisplayManager *_displayManager;
    id<BSInvalidatable> _displayManagerObserverToken;
    SBExternalDisplayDefaults *_defaults;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)addObserver:(id)a0;
- (void)displayManager:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (oneway void)getConnectedDisplayInfoWithCompletion:(id /* block */)a0;
- (oneway void)setDisplayArrangement:(id)a0 forDisplay:(id)a1;
- (oneway void)setDisplayMirroringEnabled:(id)a0 forDisplay:(id)a1;
- (oneway void)setDisplayModeSettings:(id)a0 forDisplay:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_displayInfoForDisplayIdentity:(id)a0 configuration:(id)a1;
- (id)_effectiveSettingsForDisplay:(id)a0 error:(out id *)a1;
- (id)_extendedModeDisplayIdentityForHardwareIdentifier:(id)a0 error:(out id *)a1;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)_notifyOfPropertyChangesForDisplayIdentity:(id)a0 requestingProcess:(id)a1;
- (unsigned long long)_supportedScalesForDisplay:(id)a0 error:(out id *)a1;
- (void)displayManager:(id)a0 willDisconnectIdentity:(id)a1;
- (id)initWithDisplayManager:(id)a0;
- (id)initWithDisplayManager:(id)a0 configureConnectionListener:(BOOL)a1;
- (id)preferredArrangementOfDisplay:(id)a0 relativeTo:(id)a1;
- (id)preferredArrangementOfExternalDisplay:(id)a0;

@end
