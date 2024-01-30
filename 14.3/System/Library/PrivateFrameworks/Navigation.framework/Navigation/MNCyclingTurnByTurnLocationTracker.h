@class NSMutableArray, MNTunnelLocationProjector, MNAlternateRoutesUpdater;

@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTunnelLocationProjectorDelegate> {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    NSMutableArray *_etauPositions;
    double _lastKnownCourse;
    double _consecutiveValidCourseCount;
}

- (void).cxx_destruct;
- (int)transportType;
- (void)stopTracking;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)a0;
- (void)updateManager:(id)a0 willSendETARequest:(id)a1;
- (void)updateManager:(id)a0 didReceiveETAResponse:(id)a1 toRequest:(id)a2;
- (BOOL)wantsETAUpdates;
- (id)userLocationForUpdateManager:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (BOOL)shouldProjectAlongRoute;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)a0;
- (void)_updateForAlternateRoutes:(id)a0;
- (void)tunnelLocationProjector:(id)a0 didUpdateLocation:(id)a1;
- (id)_newMapMatcherForRoute:(id)a0;
- (id)_overrideLocationForLocation:(id)a0;
- (void)_updateForLocation:(id)a0;
- (void)_updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1 request:(id)a2 response:(id)a3;
- (int)_detectedMotionForLocation:(id)a0;
- (BOOL)_allowSwitchToTransportType:(int)a0 forLocation:(id)a1;
- (id)_alternateRouteForOffRouteLocation:(id)a0;

@end
