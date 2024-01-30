@class HKQuantity, NSArray, NSCalendar, NSDateInterval, HKSleepSchedule, NSString;

@interface HKSleepDaySummary : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {
    double _inBedDuration;
    double _sleepDuration;
    BOOL _didComputeDurationTotals;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long morningIndex;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *periods;
@property (readonly, copy, nonatomic) NSArray *schedules;
@property (readonly, copy, nonatomic) HKSleepSchedule *primarySchedule;
@property (readonly, copy, nonatomic) HKQuantity *sleepDurationGoal;
@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double sleepDuration;
@property (readonly, nonatomic) BOOL containsPeriodsWithAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)emptyDaySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2;
+ (id)daySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2 periods:(id)a3 schedules:(id)a4 sleepDurationGoal:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_computeDurationTotalsIfNeeded;

@end
