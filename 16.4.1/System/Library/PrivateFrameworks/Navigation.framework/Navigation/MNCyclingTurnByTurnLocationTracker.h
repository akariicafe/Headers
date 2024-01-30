@class NSString, MNTunnelLocationProjector, MNAlternateRoutesUpdater, NSMutableArray;

@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTunnelLocationProjectorDelegate> {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    NSMutableArray *_etauPositions;
    double _lastKnownCourse;
    double _consecutiveValidCourseCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)transportType;
- (void).cxx_destruct;
- (void)stopTracking;
- (BOOL)_allowSwitchToTransportType:(int)a0 forLocation:(id)a1;
- (int)_detectedMotionForLocation:(id)a0;
- (id)_matchedLocationForLocation:(id)a0;
- (id)_newMapMatcherForRoute:(id)a0;
- (id)_overrideLocationForLocation:(id)a0;
- (void)_updateForAlternateRoutes:(id)a0;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)a0;
- (void)_updateForLocation:(id)a0;
- (void)_updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1 request:(id)a2 response:(id)a3;
- (id)initWithNavigationSession:(id)a0;
- (BOOL)shouldProjectAlongRoute;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;
- (void)tunnelLocationProjector:(id)a0 didUpdateLocation:(id)a1;
- (void)updateForETAUResponse:(id)a0;
- (id)userLocationForUpdateManager:(id)a0;

@end
