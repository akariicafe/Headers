@class MNObserverHashTable, MNNavigationSession, GEOApplicationAuditToken, NSString, MNLocation;

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver> {
    BOOL _localizeRoadNames;
}

@property (readonly, nonatomic) MNObserverHashTable *safeDelegate;
@property (readonly, weak, nonatomic) MNNavigationSession *navigationSession;
@property (nonatomic, setter=_setState:) int state;
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) MNLocation *lastMatchedLocation;
@property (readonly, nonatomic) BOOL isRerouting;
@property (readonly, nonatomic) BOOL hasArrived;
@property (readonly, nonatomic) BOOL shouldProjectAlongRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceReroute;
- (void)updateLocation:(id)a0;
- (BOOL)paused;
- (void)setDelegate:(id)a0;
- (void)stopTracking;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)resume;
- (void)_defaultsDidChange;
- (void)dealloc;
- (void)startTracking;
- (void)_updateShouldLocalizeRoadNames;
- (id)_matchedLocationForLocation:(id)a0;
- (void)_switchedToStepAtIndex:(unsigned long long)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)updateDestination:(id)a0 finishedHandler:(id /* block */)a1;
- (void)reroute:(id)a0 reason:(unsigned long long)a1;
- (id)matchedLocationForLocation:(id)a0;
- (void)updateVehicleSpeed:(double)a0 timestamp:(id)a1;
- (void)updateVehicleHeading:(double)a0 timestamp:(id)a1;
- (void)updateRequestForETAUpdate:(id)a0;
- (void)updateForETAUResponse:(id)a0;
- (BOOL)shouldAllowPause;
- (void)enterRegionWithId:(id)a0;
- (void)exitRegionWithId:(id)a0;
- (void)monitoringDidFailForRegionWithId:(id)a0 withError:(id)a1;
- (void)_setIsNavigatingInLowGuidance:(BOOL)a0;
- (void)_updateMatchedLocation:(id)a0;
- (void)_roadFeaturesForFeature:(id)a0 outRoadName:(out id *)a1 outShieldText:(out id *)a2 outShieldType:(out long long *)a3;
- (void)resetForTracePlayerAtLocation:(id)a0;
- (void)traceForcedRerouteWithResponse:(id)a0 request:(id)a1;
- (void)traceForcedActiveTransportTypeChange:(int)a0;
- (void)tracePaused;
- (void)traceJumpedInTime;
- (void)forceOnRoute:(id)a0 atLocation:(id)a1;

@end
