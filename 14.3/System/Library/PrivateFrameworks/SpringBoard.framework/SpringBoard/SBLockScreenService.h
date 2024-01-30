@class SBRemoteTransientOverlaySessionManager, NSString, SBSpuriousScreenUndimmingAssertion, BSServiceConnectionListener, SBLockScreenManager, SBFAuthenticationAssertion, NSMutableSet, FBServiceClientAuthenticator, SBMainWorkspace;
@protocol SBFAuthenticationAssertionProviding;

@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface> {
    SBLockScreenManager *_lockScreenManager;
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    SBRemoteTransientOverlaySessionManager *_remoteTransientOverlaySessionManager;
    FBServiceClientAuthenticator *_requestDeviceUnlockAuthenticator;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_connectionsPreventingPasscodeLock;
    SBFAuthenticationAssertion *_preventPasscodeLockAssertion;
    NSMutableSet *_connectionsPreventingSpuriousScreenUndim;
    SBSpuriousScreenUndimmingAssertion *_preventSpuriousScreenUndimAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (oneway void)setPreventSpuriousScreenUndim:(id)a0;
- (oneway void)setPreventPasscodeLock:(id)a0;
- (oneway void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithLockScreenManager:(id)a0 workspace:(id)a1 authenticationAssertionProvider:(id)a2 remoteTransientOverlaySessionManager:(id)a3;
- (void)requestPasscodeUnlockUIForClient:(id)a0 options:(id)a1 description:(id)a2 withCompletion:(id /* block */)a3;

@end
