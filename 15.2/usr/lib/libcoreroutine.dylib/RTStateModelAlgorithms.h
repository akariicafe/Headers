@interface RTStateModelAlgorithms : NSObject

+ (id)adjustedDate:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3;
+ (id)adjustedDateInterval:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3;
+ (id)adjustedDate:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3 outDeltaDays:(long long *)a4;
+ (id)bucketizeDates:(id)a0 bucketInterval:(double)a1 latestDate:(id)a2;
+ (double)timeByAddingUnit:(unsigned long long)a0 value:(long long)a1 toTime:(double)a2;

@end
