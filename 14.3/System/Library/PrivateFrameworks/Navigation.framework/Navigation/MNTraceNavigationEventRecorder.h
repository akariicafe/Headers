@class NSString, NSUUID, NSError, MNTraceRecorder, MNLocation;

@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver> {
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
    NSUUID *_currentPrimarySignID;
    NSUUID *_currentSecondarySignID;
    NSUUID *_laneGuidanceID;
    NSUUID *_junctionViewID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)navigationSessionDidStop:(id)a0;
- (void)navigationSession:(id)a0 shouldEndWithReason:(unsigned long long)a1;
- (void)navigationSession:(id)a0 didEnterPreArrivalStateForWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didArriveAtWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didResumeNavigatingFromWaypoint:(id)a1 endOfLegIndex:(unsigned long long)a2;
- (void)navigationSession:(id)a0 didSuppressReroute:(id)a1;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didUpdateDestination:(id)a1;
- (void)navigationSession:(id)a0 didUpdateAlternateRoutes:(id)a1;
- (void)navigationSession:(id)a0 didAnnounce:(id)a1 stage:(unsigned long long)a2;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationSession:(id)a0 showLaneDirections:(id)a1;
- (void)navigationSession:(id)a0 hideLaneDirectionsForId:(id)a1;
- (void)navigationSession:(id)a0 showJunctionView:(id)a1;
- (void)navigationSession:(id)a0 hideJunctionViewForId:(id)a1;
- (id)initWithTraceRecorder:(id)a0;
- (void)setLastMatchedLocation:(id)a0;
- (void)_recordEvent:(long long)a0 description:(id)a1;
- (void)_recordDebugSettings;
- (void)_userGotOnRoute;
- (void)_userWentOffRoute;
- (id)_descriptionForWaypoint:(id)a0;
- (id)_stringForSignDescription:(id)a0;
- (void)recordStartNavigationWithRouteInfo:(id)a0 navigationType:(int)a1 isReconnecting:(BOOL)a2;

@end
