@class MNObserverHashTable, MNNavigationSession, GEOApplicationAuditToken, NSString, MNLocation;

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver, MNSessionUpdateManagerDelegate> {
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

- (BOOL)paused;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateLocation:(id)a0;
- (void)pause;
- (void)_defaultsDidChange;
- (void)resume;
- (void)setDelegate:(id)a0;
- (void)stopTracking;
- (void)startTracking;
- (void)_updateShouldLocalizeRoadNames;
- (id)_matchedLocationForLocation:(id)a0;
- (void)_switchedToStepAtIndex:(unsigned long long)a0;
- (void)updateManager:(id)a0 willSendTransitUpdateRequests:(id)a1;
- (void)updateManager:(id)a0 didReceiveTransitUpdateResponse:(id)a1;
- (void)updateManager:(id)a0 willSendTransitUpdateRequestForRouteIDs:(id)a1;
- (void)updateManager:(id)a0 didReceiveTransitUpdates:(id)a1;
- (void)updateManager:(id)a0 didReceiveTransitError:(id)a1;
- (void)updateManager:(id)a0 willSendETARequest:(id)a1;
- (void)updateManager:(id)a0 didReceiveETAResponse:(id)a1 toRequest:(id)a2;
- (void)updateManager:(id)a0 didUpdateETAForRouteInfo:(id)a1;
- (void)updateManager:(id)a0 didReceiveETAError:(id)a1;
- (BOOL)wantsETAUpdates;
- (id)routeInfoForUpdateManager:(id)a0;
- (id)userLocationForUpdateManager:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)updateDestination:(id)a0 finishedHandler:(id /* block */)a1;
- (void)reroute:(id)a0 reason:(unsigned long long)a1;
- (id)matchedLocationForLocation:(id)a0;
- (void)updateVehicleSpeed:(double)a0 timestamp:(id)a1;
- (void)updateVehicleHeading:(double)a0 timestamp:(id)a1;
- (BOOL)shouldAllowPause;
- (void)_setIsNavigatingInLowGuidance:(BOOL)a0;
- (void)_updateMatchedLocation:(id)a0;
- (void)_roadFeaturesForFeature:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a0 outRoadName:(id *)a1 outShieldText:(id *)a2 outShieldType:(long long *)a3;
- (void)resetForTracePlayerAtLocation:(id)a0;
- (void)traceForcedRerouteWithResponse:(id)a0 request:(id)a1;
- (void)traceForcedActiveTransportTypeChange:(int)a0;
- (void)tracePaused;
- (void)traceJumpedInTime;
- (void)forceOnRoute:(id)a0 atLocation:(id)a1;

@end
