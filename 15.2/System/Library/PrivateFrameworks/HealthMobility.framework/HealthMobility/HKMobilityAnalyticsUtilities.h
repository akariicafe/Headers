@interface HKMobilityAnalyticsUtilities : NSObject

+ (id)numberOfDaysBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)activeWatchProductType;
+ (id)payloadValueForAge:(id)a0;
+ (id)payloadStringForBiologicalSex:(id)a0;
+ (id)ageWithHealthStore:(id)a0 error:(id *)a1;
+ (id)biologicalSexWithHealthStore:(id)a0 error:(id *)a1;
+ (id)yearsBetweenStartDateComponents:(id)a0 endDate:(id)a1;

@end
