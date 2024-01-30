@interface HDAudioAnalyticsUtilities : NSObject

+ (double)leqFromStatistics:(id)a0;
+ (double)durationFromStatistics:(id)a0;
+ (id)localGregorianCalendar;
+ (id)boundedIntegerForValue:(double)a0 orderedBuckets:(id)a1 sentinel:(id)a2 transformer:(id /* block */)a3;
+ (double)doseFromStatistics:(id)a0 days:(long long)a1;
+ (long long)exposureAlertCount:(id)a0;
+ (id)fullDays:(long long)a0 beforeDate:(id)a1;
+ (id)rollingDays:(long long)a0 beforeDate:(id)a1;
+ (id)boundedIntegerForExposureDuration:(double)a0;
+ (id)boundedIntegerForSyncDelayDuration:(double)a0;
+ (id)boundedIntegerForEventDuration:(double)a0;
+ (id)boundedIntegerForLockedDuration:(double)a0;
+ (id)boundedIntegerForTimeSinceLastNotification:(double)a0;
+ (id)boundedIntegerForLEQ:(double)a0;
+ (id)boundedIntegerForDose:(double)a0;
+ (id)audioAverageAndDurationForExposureType:(long long)a0 profile:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
+ (id)audioExposureEventsForExposureType:(long long)a0 profile:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
+ (id)latestAudioExposureEventForExposureType:(long long)a0 profile:(id)a1 error:(id *)a2;

@end
