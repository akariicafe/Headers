@interface PPRoutineSupport : NSObject

+ (id)_generateLocationNameLookupTable;
+ (id)_scoredNamedEntitiesForAddress:(id)a0 placemark:(id)a1 locationLookupTable:(id)a2;
+ (void)importCoreRoutineDataWithCompletion:(id /* block */)a0;
+ (id)locationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)fetchLocationOfInterestByType:(long long)a0;

@end
