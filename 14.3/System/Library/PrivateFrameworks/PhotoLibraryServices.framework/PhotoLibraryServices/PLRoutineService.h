@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void)fetchLocationsOfInterestIfNeeded;
- (void).cxx_destruct;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)initWithFetchDateInterval:(id)a0;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationsOfInterestOfType:(long long)a0;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (id)lastLocationOfInterestVisit;
- (void)postProcessLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)_buildLocationsOfInterestCache;
- (void)_pinPendingVisits;
- (BOOL)hasLocationsOfInterestInformation;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)invalidateLocationsOfInterest;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;

@end
