@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void)_buildLocationsOfInterestCache;
- (void)_invalidateLocationsOfInterest;
- (id)locationOfInterestAtLocation:(id)a0;
- (void)invalidateLocationsOfInterest;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)initWithFetchDateInterval:(id)a0;
- (BOOL)hasLocationsOfInterestInformation;
- (void)fetchLocationsOfInterestIfNeeded;
- (void)_pinPendingVisits;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)lastLocationOfInterestVisit;
- (void).cxx_destruct;
- (void)postProcessLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;

@end
