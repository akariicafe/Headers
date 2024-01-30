@class AVRoutingSessionManager, NSString, AVRoutingSessionDestination, NSArray, NSMutableDictionary, MPMediaControlsStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion, NSMutableSet, _SBDirectToAirPlayPolicyState, AVExternalPlaybackMonitor;

@interface SBDirectToAirPlayController : NSObject <SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver> {
    SBSStatusBarStyleOverridesAssertion *_directToAirPlayStatusBarStyleOverrideAssertion;
    NSString *_directToAirPlayStatusBarStyleOverrideAssertionCorrespondingBundleID;
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

+ (BOOL)directToAirPlayIsAvailable;
+ (BOOL)_mediaControllerSaysWeHaveAWiredRoute;

- (id)_captureCurrentPolicyState;
- (id)init;
- (void).cxx_destruct;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)controlCenterWillPresent;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (void)controlCenterDidDismiss;
- (id)_currentExternalRouteNames;
- (void)lockStateChanged:(id)a0;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)a0;
- (void)currentExternalDestinationDidChange:(id)a0;
- (void)externalAirPlayVideoActiveDidChange:(id)a0;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)a0;
- (void)externalDisplayChanged:(id)a0;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)a0 playing:(BOOL)a1 completion:(id /* block */)a2;
- (void)likelyExternalDestinationsDidChange:(id)a0;
- (void)externalAirPlayVideoPlayingDidChange:(id)a0;
- (id)_externalRouteNamesForDestination:(id)a0;
- (void)_rollBannerActionForReadyBundleID:(id)a0 sceneHandle:(id)a1;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (void)_evaluatePolicyForDirectToAirplayAlert;

@end
