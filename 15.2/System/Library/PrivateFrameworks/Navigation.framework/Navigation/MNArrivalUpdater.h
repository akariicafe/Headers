@class GEOComposedRoute, NSString, MNObserverHashTable, NSDate, NSMutableArray, MNLocation;

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate> {
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    BOOL _useLegacyArrival;
    unsigned long long _arrivalState;
    unsigned long long _arrivalLegIndex;
    NSDate *_arrivalDate;
    double _closestDistanceToWaypoint;
    BOOL _isApproachingWaypoint;
    NSMutableArray *_timeoutRegions;
    BOOL _isCharging;
}

@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)updateForRoute:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateForLocation:(id)a0;
- (void)arrivalRegionTimerDidFire:(id)a0;
- (id)initWithRoute:(id)a0 useLegacyArrival:(BOOL)a1;
- (BOOL)allowDepartureForLocation:(id)a0;
- (void)updateForDepartureFromWaypoint;
- (void)setIsCharging:(BOOL)a0 location:(id)a1;
- (BOOL)_shouldUseNewArrivalLogic;
- (BOOL)_legacyCheckArrivalForLocation:(id)a0;
- (BOOL)_checkArrival:(id)a0 forLocation:(id)a1;
- (void)_setArrivalForLegIndex:(unsigned long long)a0;
- (BOOL)_checkPreArrival:(id)a0 forLocation:(id)a1;
- (BOOL)_checkApproachingForLocation:(id)a0;
- (double)_distanceToEndOfLeg:(id)a0 fromLocation:(id)a1;
- (BOOL)_legacyCheckDrivingArrivalForLocation:(id)a0;
- (BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)a0;

@end
