@class NSString, MNTunnelLocationProjector, MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, NSMutableArray;

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate> {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;
    int _detectedTransportType;
    BOOL _exitedVehicle;
    unsigned long long _vehicleExitConfidence;
    struct { double latitude; double longitude; } _vehicleExitCoordinate;
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
- (void)tracePaused;
- (void)trafficIncidentAlertUpdater:(id)a0 didDismissAlert:(id)a1 withReroute:(BOOL)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 didSwitchToNewRoute:(id)a1 forAlert:(id)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 invalidatedAlert:(id)a1;
- (void)trafficIncidentAlertUpdater:(id)a0 receivedAlert:(id)a1 responseCallback:(id /* block */)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 updatedAlert:(id)a1;
- (BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)a0;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)a0;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)a0;
- (void)tunnelLocationProjector:(id)a0 didUpdateLocation:(id)a1;
- (void)updateForETAUResponse:(id)a0;
- (void)updateRequestForETAUpdate:(id)a0;

@end
