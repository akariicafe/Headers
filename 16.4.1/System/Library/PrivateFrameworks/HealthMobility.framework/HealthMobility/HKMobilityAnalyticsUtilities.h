@interface HKMobilityAnalyticsUtilities : NSObject

+ (id)numberOfDaysBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)activeWatchProductType;
+ (id)ageWithHealthStore:(id)a0 error:(id *)a1;
+ (id)biologicalSexWithHealthStore:(id)a0 error:(id *)a1;
+ (id)payloadStringForBiologicalSex:(id)a0;
+ (id)payloadValueForAge:(id)a0;
+ (id)yearsBetweenStartDateComponents:(id)a0 endDate:(id)a1;

@end
