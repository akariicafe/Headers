@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)a0 stateManager:(id)a1 navigationSessionManager:(id)a2;

- (void)setTraceIsPlaying:(BOOL)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)enterState;
- (void)forceReroute;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)recordPedestrianTracePath:(id)a0;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (void).cxx_destruct;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)setTracePosition:(double)a0;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)switchToRoute:(id)a0;
- (void)stopCurrentGuidancePrompt;
- (void)updateDestination:(id)a0;
- (void)resumeOriginalDestination;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (unsigned long long)desiredLocationProviderType;
- (id)traceManager;
- (void)postEnterState;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (id)simulationLocationProvider;
- (void)leaveState;
- (id)currentDestination;
- (BOOL)requiresHighMemoryThreshold;
- (id)clParameters;
- (BOOL)shouldClearStoredRoutes;
- (void)preEnterState;

@end
