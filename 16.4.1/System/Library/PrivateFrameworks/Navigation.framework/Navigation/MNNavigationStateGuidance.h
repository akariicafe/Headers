@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)a0 stateManager:(id)a1 navigationSessionManager:(id)a2;

- (void)setTracePosition:(double)a0;
- (void)resumeOriginalDestination;
- (void)setSimulationSpeedMultiplier:(double)a0;
- (void)stopCurrentGuidancePrompt;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)rerouteWithWaypoints:(id)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)insertWaypoint:(id)a0;
- (void)switchToRoute:(id)a0;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setSimulationSpeedOverride:(double)a0;
- (void)recordPedestrianTracePath:(id)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)forceReroute;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)removeWaypointAtIndex:(unsigned long long)a0;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)updateDestination:(id)a0;
- (void)setSimulationPosition:(double)a0;
- (void)advanceToNextLeg;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (unsigned long long)desiredLocationProviderType;
- (void).cxx_destruct;
- (void)enterState;
- (id)clParameters;
- (id)currentDestination;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (void)leaveState;
- (void)postEnterState;
- (void)preEnterState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (id)traceManager;

@end
