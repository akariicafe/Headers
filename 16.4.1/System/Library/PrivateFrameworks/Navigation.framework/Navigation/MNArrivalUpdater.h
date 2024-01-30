@class NSTimer, NSString, MNObserverHashTable, MNLocation, GEOComposedRoute, MNDepartureUpdater, NSMutableArray, MNEVChargingStateMonitor;

@interface MNArrivalUpdater : NSObject <GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate> {
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    NSMutableArray *_timeoutRegions;
    MNEVChargingStateMonitor *_evChargingStateMonitor;
    BOOL _isCharging;
    MNDepartureUpdater *_departureUpdater;
    NSTimer *_departureTimer;
    unsigned long long _approachingLegIndex;
    unsigned long long _stateCaptureHandle;
}

@property (nonatomic) BOOL isMonitoringWaypoint;
@property (nonatomic) unsigned long long arrivalState;
@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (nonatomic) BOOL isApproachingWaypoint;
@property (nonatomic) unsigned long long targetLegIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoute:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkApproachingWaypointAtLocation:(id)a0 threshold:(double)a1;
- (BOOL)_checkArrival:(id)a0 forLocation:(id)a1;
- (BOOL)_checkPreArrival:(id)a0 forLocation:(id)a1;
- (double)_distanceToEndOfLeg:(id)a0 fromLocation:(id)a1;
- (void)_setArrivalForLegIndex:(unsigned long long)a0;
- (void)_startMonitoringBatteryChargeForLegIndex:(unsigned long long)a0;
- (id)_timeoutRegionsForLeg:(unsigned long long)a0;
- (void)_updateForDepartureFromWaypointWithReason:(unsigned long long)a0;
- (BOOL)allowDepartureForLocation:(id)a0;
- (void)arrivalRegionTimerDidFire:(id)a0;
- (void)evChargingStateMonitor:(id)a0 didChangeChargingState:(BOOL)a1;
- (void)evChargingStateMonitor:(id)a0 didReachTargetBatteryCharge:(id)a1;
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)a0;
- (void)forceDepartureForCurrentLeg:(unsigned long long)a0;
- (void)setIsCharging:(BOOL)a0 location:(id)a1;
- (void)updateForLocation:(id)a0;
- (void)updateForRoute:(id)a0 reason:(unsigned long long)a1;

@end
