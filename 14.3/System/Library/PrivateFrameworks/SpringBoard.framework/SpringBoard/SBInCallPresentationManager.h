@class NSString, SBInCallPresentationRequestServer, NSMutableDictionary, SBApplicationController, SBInCallPresentationSession, SBMainDisplaySceneManager, NSMutableArray, SBInCallBannerAuthority;
@protocol SBInCallPresentationManagerDelegate;

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, SBApplicationHosting> {
    SBApplicationController *_applicationController;
    SBInCallPresentationRequestServer *_presentationRequestServer;
    SBInCallBannerAuthority *_bannerAuthority;
    NSMutableDictionary *_clientIdentifierToPresentationSession;
    NSMutableArray *_pendingInvalidationSessions;
}

@property (class, readonly, getter=isSpecializedAPISupported) BOOL specializedAPISupported;

@property (readonly, nonatomic) SBInCallPresentationSession *_lastPresentationSession;
@property (weak, nonatomic) id<SBInCallPresentationManagerDelegate> delegate;
@property (readonly, nonatomic) SBMainDisplaySceneManager *sceneManager;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (readonly, nonatomic) BOOL supportsHandlingUILockForWindowedAccessoryAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (id)hostedAppSceneHandle;
- (BOOL)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (id)hostedAppSceneHandles;
- (void).cxx_destruct;
- (id)_hostedPresentationSessions;
- (void)handleDeviceLockFromSource:(int)a0;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifierDidInvalidate:(id)a1;
- (void)reactivateInCallForReason:(long long)a0;
- (void)inCallClientPresentationSessionSceneWasDestroyed:(id)a0;
- (BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)a0 wakingDisplay:(BOOL)a1;
- (long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)a0;
- (void)_dismissClientWithIdentifier:(id)a0 animated:(BOOL)a1 shouldFinalizeSceneDestruction:(BOOL)a2 shouldInvalidate:(BOOL)a3 analyticsSource:(id)a4 completion:(id /* block */)a5;
- (id)_sessionForSceneWithIdentifier:(id)a0;
- (long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)a0;
- (id)initWithSceneManager:(id)a0 applicationController:(id)a1 bannerManager:(id)a2;
- (id)_newClientPresentationSessionWithSceneHandle:(id)a0;
- (void)inCallClientPresentationSession:(id)a0 handleDestroySceneActionWithReason:(long long)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (void)inCallClientPresentationSession:(id)a0 callConnectedStatusChangedForPresentableViewController:(id)a1;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifier:(id)a1 requestsPresentationWithConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)handleAccessoryAttachWithCompletion:(id /* block */)a0;
- (void)_dismissAllPresentations;
- (void)handlePresentationForActivityContinuationIdentifier:(id)a0;

@end
