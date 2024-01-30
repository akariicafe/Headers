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
    NSMutableArray *_timeoutRegions;
}

@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateForRoute:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)setDelegate:(id)a0;
- (void)arrivalRegionTimerDidFire:(id)a0;
- (id)initWithRoute:(id)a0 useLegacyArrival:(BOOL)a1;
- (BOOL)allowDepartureForLocation:(id)a0;
- (void)updateForDepartureFromWaypoint;
- (BOOL)_shouldUseNewArrivalLogic;
- (BOOL)_legacyCheckArrivalForLocation:(id)a0;
- (BOOL)_checkArrival:(id)a0 forLocation:(id)a1;
- (BOOL)_checkPreArrival:(id)a0 forLocation:(id)a1;
- (double)_distanceToEndOfLeg:(id)a0 fromLocation:(id)a1;
- (BOOL)_legacyCheckDrivingArrivalForLocation:(id)a0;
- (BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)a0;

@end
