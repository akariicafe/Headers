@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void)invalidateLocationsOfInterest;
- (void)postProcessLocationsOfInterest;
- (void)_buildLocationsOfInterestCache;
- (void)fetchLocationsOfInterestIfNeeded;
- (id)initWithFetchDateInterval:(id)a0;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void).cxx_destruct;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)lastLocationOfInterestVisit;
- (id)locationsOfInterestOfType:(long long)a0;
- (BOOL)hasLocationsOfInterestInformation;
- (void)_pinPendingVisits;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationOfInterestAtLocation:(id)a0;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;

@end
