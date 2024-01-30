@class GEOComposedRoute, NSString, MNLocation, NSArray, NSUUID, NSMutableArray, MNTraceRecorder;

@interface MNTraceEventRecorder : NSObject <MNNavigationSessionObserver> {
    MNTraceRecorder *_traceRecorder;
    NSMutableArray *_events;
    GEOComposedRoute *_route;
    unsigned long long _lastTrackedStepIndex;
    MNLocation *_lastTrackedLocation;
    double _timeAtStartOfRoute;
    NSArray *_lastInstructions;
    NSString *_lastAnnouncement;
    BOOL _isShowingSecondarySign;
    unsigned long long _numPendingAnnouncements;
    unsigned long long _announcementStage;
    double _distanceToManeuver;
    NSUUID *_lastPrimarySignID;
    NSUUID *_lastSecondarySignID;
}

@property (readonly, nonatomic) NSMutableArray *eventHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)navigationSessionDidStart:(id)a0 isReconnecting:(BOOL)a1;
- (void)navigationSession:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)navigationSessionWillReroute:(id)a0;
- (void)navigationSession:(id)a0 didReroute:(id)a1 withLocation:(id)a2 withAlternateRoutes:(id)a3 rerouteReason:(unsigned long long)a4;
- (void)navigationSession:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2;
- (void)navigationSession:(id)a0 didAnnounce:(id)a1 stage:(unsigned long long)a2;
- (void)navigationSession:(id)a0 displayPrimaryStep:(id)a1 instructions:(id)a2 shieldType:(int)a3 shieldText:(id)a4 drivingSide:(int)a5 maneuverStepIndex:(unsigned long long)a6 isSynthetic:(BOOL)a7;
- (void)navigationSession:(id)a0 displaySecondaryStep:(id)a1 instructions:(id)a2 shieldType:(int)a3 shieldText:(id)a4 drivingSide:(int)a5;
- (void)navigationSessionHideSecondaryStep:(id)a0;
- (void)navigationSessionBeginGuidanceUpdate:(id)a0;
- (void)navigationSessionEndGuidanceUpdate:(id)a0;
- (void)navigationSession:(id)a0 updateSignsWithInfo:(id)a1;
- (void)navigationSession:(id)a0 showLaneDirections:(id)a1;
- (void)navigationSession:(id)a0 hideLaneDirectionsForId:(id)a1;
- (void)navigationSession:(id)a0 didAnnounceArrival:(id)a1;
- (double)timeSinceStartOfRoute;
- (id)initWithTraceRecorder:(id)a0;

@end
