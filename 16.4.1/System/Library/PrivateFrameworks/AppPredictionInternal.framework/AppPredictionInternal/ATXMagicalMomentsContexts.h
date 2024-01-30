@interface ATXMagicalMomentsContexts : NSObject

+ (id)eventIdentifierPredicateForValue:(id)a0;
+ (id)getCurrentLOI;
+ (unsigned long long)getMinTemporalDistanceFromDate:(id)a0 toVisitsToLOI:(id)a1;
+ (id)locationOfInterestForDate:(id)a0 dateIntervalForSearch:(id)a1;
+ (id)loiPredicateForUUIDString:(id)a0;
+ (unsigned long long)minDistanceFromDate:(id)a0 toDateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)partOfWeekPredicatesUsingStartDate:(BOOL)a0;
+ (id)timeOfDayPredicatesWithRequestedDurationInHours:(unsigned long long)a0 shouldPredicateOnStartDate:(BOOL)a1;

@end
