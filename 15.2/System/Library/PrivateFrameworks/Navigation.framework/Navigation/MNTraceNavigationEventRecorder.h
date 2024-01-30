@class NSString, NSUUID, NSArray, NSError, MNTraceRecorder, MNLocation;

@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver> {
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
    NSUUID *_currentPrimarySignID;
    NSUUID *_currentSecondarySignID;
    NSUUID *_laneGuidanceID;
    NSUUID *_junctionViewID;
    NSArray *_lastARInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)navigationSession:(id)a0 didStartWithRoute:(id)a1 navigationType:(int)a2 isReconnecting:(BOOL)a3;
- (void)navigationSession:(id)a0 didStopWithReason:(unsigned long long)a1;
- (void)navigationSession:(id)a0 matchedToStepIndex:(unsigned long long)a1 segmentIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didEnterPreArrivalStateForWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didSuppressReroute:(id)a1;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationSession:(id)a0 didAnnounce:(id)a1 stage:(unsigned long long)a2;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationSession:(id)a0 updateSignsWithARInfo:(id)a1;
- (void)navigationSession:(id)a0 showLaneDirections:(id)a1;
- (void)navigationSession:(id)a0 hideLaneDirectionsForId:(id)a1;
- (void)navigationSession:(id)a0 showJunctionView:(id)a1;
- (void)navigationSession:(id)a0 hideJunctionViewForId:(id)a1;
- (void)navigationSession:(id)a0 didReceiveTrafficIncidentAlert:(id)a1 responseCallback:(id /* block */)a2;
- (void)navigationSession:(id)a0 didReceiveTransitAlert:(id)a1;
- (id)initWithTraceRecorder:(id)a0;
- (void)_userGotOnRoute;
- (void)_userWentOffRoute;
- (void)_recordEvent:(long long)a0 description:(id)a1;
- (void)_recordDebugSettings;
- (id)_descriptionForWaypoint:(id)a0;
- (id)_stringForSignDescription:(id)a0;
- (void)setLastMatchedLocation:(id)a0;

@end
