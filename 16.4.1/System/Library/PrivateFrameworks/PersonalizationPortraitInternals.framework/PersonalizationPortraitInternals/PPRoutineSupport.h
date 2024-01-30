@interface PPRoutineSupport : NSObject

+ (id)fetchLocationOfInterestByType:(long long)a0;
+ (BOOL)importCoreRoutineDataWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)locationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1;

@end
