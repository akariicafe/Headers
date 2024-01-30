@class SBHideSharePlayContentFromSharedScreenController, NSString, SBExpanseBannerAuthority, SBInCallPresentationRequestServer, SBInCallPresentationSession, SBApplicationController, SBMainDisplaySceneManager, NSMutableDictionary, NSMutableArray, SBInCallBannerAuthority, NSMutableSet;
@protocol SBInCallPresentationManagerDelegate;

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, FBSceneManagerObserver, SBMainDisplaySceneManagerObserver, SBApplicationHosting> {
    SBApplicationController *_applicationController;
    SBInCallPresentationRequestServer *_presentationRequestServer;
    SBInCallBannerAuthority *_inCallBannerAuthority;
    SBExpanseBannerAuthority *_expanseBannerAuthority;
    NSMutableDictionary *_clientIdentifierToPresentationSession;
    NSMutableArray *_pendingInvalidationSessions;
    NSMutableSet *_bundleIdentifiersOfObservedApplications;
}

@property (class, readonly, getter=isSpecializedAPISupported) BOOL specializedAPISupported;

@property (readonly, nonatomic) SBInCallPresentationSession *_lastPresentationSession;
@property (weak, nonatomic) id<SBInCallPresentationManagerDelegate> delegate;
@property (readonly, nonatomic) SBMainDisplaySceneManager *sceneManager;
@property (readonly, nonatomic) SBHideSharePlayContentFromSharedScreenController *hideSharePlayContentFromSharedScreenController;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (readonly, nonatomic) BOOL hasFullscreenActiveCallInSwitcher;
@property (readonly, nonatomic) BOOL supportsHandlingUILockForWindowedAccessoryAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneManager:(id)a0 didAddScene:(id)a1;
- (void)_dismissClientWithIdentifier:(id)a0 animated:(BOOL)a1 analyticsSource:(id)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)_applicationDidExit:(id)a0;
- (long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)handlePresentationForActivityContinuationIdentifier:(id)a0;
- (BOOL)canHostAnApp;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)_dismissAllPresentations;
- (long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)a0;
- (id)hostedAppSceneHandle;
- (id)_hostedPresentationSessions;
- (id)initWithSceneManager:(id)a0 applicationController:(id)a1 bannerManager:(id)a2;
- (BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)a0 wakingDisplay:(BOOL)a1;
- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifierDidInvalidate:(id)a1;
- (void)conformsToSBApplicationHosting;
- (void)_dismissAllPresentationsForApplication:(id)a0;
- (void)_runZombieChecksForScene:(id)a0;
- (id)_newClientPresentationSessionWithSceneHandle:(id)a0;
- (void)inCallPresentationRequestServer:(id)a0 clientWithIdentifier:(id)a1 requestsPresentationWithConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)inCallClientPresentationSession:(id)a0 handleDestroySceneActionWithReason:(long long)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (id)hostedAppSceneHandles;
- (void)inCallClientPresentationSession:(id)a0 callConnectedStatusChangedForPresentableViewController:(id)a1;
- (void)inCallClientPresentationSessionSceneWasDestroyed:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasOverrideAppSceneEntityForLaunchingApplication:(id)a0;
- (id)inCallClientPresentationSession:(id)a0 acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)a1;
- (void)handleDeviceLockFromSource:(int)a0;
- (BOOL)canHandleOpenApplicationRequestForApplication:(id)a0;
- (void)reactivateInCallForReason:(long long)a0;
- (BOOL)inCallClientPresentationSession:(id)a0 canRestoreToPreviousEntity:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inCallClientPresentationSessionResolvedPIPDodgingInsets:(id)a0;
- (void)handleOpenApplicationRequest:(id)a0 clientWorkspace:(id)a1 actions:(id)a2 origin:(id)a3 withResult:(id /* block */)a4;
- (void)_runZombieChecksForSceneHandle:(id)a0;
- (BOOL)_hasPendingDismissalOfSceneHandleWithPersistenceIdentifier:(id)a0;
- (id)_sessionForSceneWithIdentifier:(id)a0;
- (void)ensureSwitcherInclusionForRestoringFromPIPForSceneWithPersistenceIdentifer:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isManagingSceneOrSceneHandleWithPersistenceIdentifier:(id)a0;
- (id)overrideAppSceneEntityForLaunchingApplication:(id)a0;
- (void)handleAccessoryAttachWithCompletion:(id /* block */)a0;

@end
