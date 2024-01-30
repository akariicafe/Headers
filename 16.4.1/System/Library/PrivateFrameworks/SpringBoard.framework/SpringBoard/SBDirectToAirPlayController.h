@class AVRoutingSessionManager, NSString, AVRoutingSessionDestination, NSArray, NSMutableDictionary, MPMediaControlsStatusBarStyleOverridesCoordinator, NSMutableSet, _SBDirectToAirPlayPolicyState, STAirPlayStatusDomainPublisher, AVExternalPlaybackMonitor;

@interface SBDirectToAirPlayController : NSObject <SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver> {
    STAirPlayStatusDomainPublisher *_airPlayStatusDomainPublisher;
    NSMutableDictionary *_directToAirPlayPlayingBundleIDsToRouteNames;
    NSMutableDictionary *_directToAirPlayReadyBundleIDsToRouteNames;
    NSMutableSet *_directToAirPlayIneligibleBundleIDs;
    NSMutableSet *_directToAirPlayEligibleBundleIDs;
    BOOL _controlCenterReportsItselfAsPresented;
    BOOL _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
    BOOL _externalPlaybackIsActive;
    BOOL _externalPlaybackIsPlaying;
    MPMediaControlsStatusBarStyleOverridesCoordinator *_mediaControlsCoordinator;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
    AVRoutingSessionManager *_routingSessionManager;
    AVRoutingSessionDestination *_currentRoutingSessionDestination;
    NSArray *_likelyExternalPlaybackDestinations;
    _SBDirectToAirPlayPolicyState *_currentState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_mediaControllerSaysWeHaveAWiredRoute;
+ (BOOL)directToAirPlayIsAvailable;

- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (id)_captureCurrentPolicyState;
- (void)currentExternalDestinationDidChange:(id)a0;
- (void)likelyExternalDestinationsDidChange:(id)a0;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)a0;
- (void)_evaluatePolicyForDirectToAirplayAlert;
- (id)_externalRouteNamesForDestination:(id)a0;
- (void)controlCenterWillPresent;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)a0 playing:(BOOL)a1 completion:(id /* block */)a2;
- (void)externalAirPlayVideoPlayingDidChange:(id)a0;
- (id)_currentExternalRouteNames;
- (void)dealloc;
- (void)_rollBannerActionForReadyBundleID:(id)a0 sceneHandle:(id)a1;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (void)controlCenterDidDismiss;
- (id)init;
- (void)lockStateChanged:(id)a0;
- (void)externalAirPlayVideoActiveDidChange:(id)a0;
- (void)externalDisplayChanged:(id)a0;
- (void).cxx_destruct;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)a0;

@end
