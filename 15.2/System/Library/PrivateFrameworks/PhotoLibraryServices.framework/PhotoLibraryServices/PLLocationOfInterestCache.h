@class NSMutableDictionary, NSMutableSet, NSDate, PLLocationOfInterestVisit;

@interface PLLocationOfInterestCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *visitsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest;
@property (retain, nonatomic) NSMutableSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *workLocations;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) NSDate *earliestVisitStartDate;
@property (readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit;

- (id)closestLocationOfInterestVisitToLocation:(id)a0 withinDistance:(double)a1 inDateInterval:(id)a2;
- (id)locationsOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)locationsOfInterestVisitsInDateInterval:(id)a0;
- (void)addLocationOfInterest:(id)a0;
- (id)locationOfInterestAtLocation:(id)a0;

@end
