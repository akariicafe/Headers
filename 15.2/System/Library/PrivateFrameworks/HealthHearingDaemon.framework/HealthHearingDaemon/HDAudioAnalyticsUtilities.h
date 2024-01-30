@interface HDAudioAnalyticsUtilities : NSObject

+ (id)boundedIntegerForDose:(double)a0;
+ (double)durationFromStatistics:(id)a0;
+ (id)rollingDays:(long long)a0 beforeDate:(id)a1;
+ (id)fullDays:(long long)a0 beforeDate:(id)a1;
+ (id)boundedIntegerForTimeSinceLastNotification:(double)a0;
+ (id)boundedIntegerForSyncDelayDuration:(double)a0;
+ (id)boundedIntegerForEventDuration:(double)a0;
+ (double)leqFromStatistics:(id)a0;
+ (double)doseFromStatistics:(id)a0 days:(long long)a1;
+ (long long)exposureAlertCount:(id)a0;
+ (id)boundedIntegerForValue:(double)a0 orderedBuckets:(id)a1 sentinel:(id)a2 transformer:(id /* block */)a3;
+ (id)latestAudioExposureEventForExposureType:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)audioExposureEventsForExposureType:(long long)a0 profile:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
+ (id)audioAverageAndDurationForExposureType:(long long)a0 profile:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
+ (id)localGregorianCalendar;
+ (id)boundedIntegerForLockedDuration:(double)a0;
+ (id)boundedIntegerForLEQ:(double)a0;
+ (id)boundedIntegerForExposureDuration:(double)a0;

@end
