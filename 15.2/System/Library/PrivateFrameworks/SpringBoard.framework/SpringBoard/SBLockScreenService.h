@class SBRemoteTransientOverlaySessionManager, NSString, SBSpuriousScreenUndimmingAssertion, SBPasscodeEntryTransientOverlayViewController, BSServiceConnectionListener, SBLockScreenManager, SBFAuthenticationAssertion, NSMutableSet, SBFUserAuthenticationController, FBServiceClientAuthenticator, SBMainWorkspace;
@protocol SBFLockOutStatusProvider, SBFAuthenticationAssertionProviding;

@interface SBLockScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSLockScreenServiceServerInterface, SBPasscodeEntryTransientOverlayViewControllerDelegate> {
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
    NSString *_passcodeTitle;
    NSString *_passcodeSubtitle;
    id /* block */ _passcodeCheckCompletion;
}

@property (retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController;
@property (retain, nonatomic) SBFUserAuthenticationController *userAuthController;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)a0 authenticatePasscode:(id)a1;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (oneway void)setPreventPasscodeLock:(id)a0;
- (oneway void)setPreventSpuriousScreenUndim:(id)a0;
- (oneway void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (oneway void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)requestPasscodeCheckUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (void)_setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithLockScreenManager:(id)a0 workspace:(id)a1 authenticationAssertionProvider:(id)a2 remoteTransientOverlaySessionManager:(id)a3;
- (void)requestPasscodeUnlockUIForClient:(id)a0 options:(id)a1 description:(id)a2 withCompletion:(id /* block */)a3;
- (void)requestPasscodeCheckUIForClient:(id)a0 options:(id)a1 description:(id)a2 withCompletion:(id /* block */)a3;

@end
