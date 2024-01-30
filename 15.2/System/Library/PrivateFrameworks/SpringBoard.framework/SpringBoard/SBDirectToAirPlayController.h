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

+ (BOOL)_mediaControllerSaysWeHaveAWiredRoute;
+ (BOOL)directToAirPlayIsAvailable;

- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)lockStateChanged:(id)a0;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)a0;
- (id)_captureCurrentPolicyState;
- (void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)a0 playing:(BOOL)a1 completion:(id /* block */)a2;
- (id)_currentExternalRouteNames;
- (void)controlCenterDidDismiss;
- (void)externalAirPlayVideoActiveDidChange:(id)a0;
- (void)externalDisplayChanged:(id)a0;
- (void)controlCenterWillPresent;
- (void).cxx_destruct;
- (id)init;
- (void)_clearDirectToAirPlayStatusBarAssertion;
- (void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)a0;
- (id)_externalRouteNamesForDestination:(id)a0;
- (void)externalAirPlayVideoPlayingDidChange:(id)a0;
- (void)_rollBannerActionForReadyBundleID:(id)a0 sceneHandle:(id)a1;
- (void)_updateRouteNamesForPlayingAndReadyApps;
- (void)_main_evaluatePolicyForDirectToAirplayAlert;
- (void)likelyExternalDestinationsDidChange:(id)a0;
- (void)_evaluatePolicyForDirectToAirplayAlert;
- (void)currentExternalDestinationDidChange:(id)a0;

@end
