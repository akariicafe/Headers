@class HKQuantity, NSArray, NSDateComponents, NSDate;

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying> {
    long long _activitySummaryIndex;
    NSDateComponents *_dateComponents;
    HKQuantity *_activeEnergyBurned;
    HKQuantity *_appleMoveTime;
    HKQuantity *_appleExerciseTime;
    HKQuantity *_appleStandHours;
    HKQuantity *_distanceWalkingRunning;
    HKQuantity *_stepCount;
    HKQuantity *_activeEnergyBurnedGoal;
    HKQuantity *_appleMoveTimeGoal;
    HKQuantity *_appleExerciseTimeGoal;
    HKQuantity *_appleStandHoursGoal;
    HKQuantity *_deepBreathingDuration;
    HKQuantity *_pushCount;
    HKQuantity *_flightsClimbed;
    long long _wheelchairUse;
    long long _activityMoveMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, getter=_gregorianDateComponents, setter=_setGregorianDateComponents:) NSDateComponents *gregorianDateComponents;
@property (nonatomic, getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:) long long activitySummaryIndex;
@property (retain, nonatomic, getter=_startDate, setter=_setStartDate:) NSDate *startDate;
@property (retain, nonatomic, getter=_endDate, setter=_setEndDate:) NSDate *endDate;
@property (retain, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (readonly, nonatomic, getter=_activeEnergyCompletionPercentage) double activeEnergyCompletionPercentage;
@property (readonly, nonatomic, getter=_moveMinutesCompletionPercentage) double moveMinutesCompletionPercentage;
@property (readonly, nonatomic, getter=_exerciseTimeCompletionPercentage) double exerciseTimeCompletionPercentage;
@property (readonly, nonatomic, getter=_standHoursCompletionPercentage) double standHoursCompletionPercentage;
@property (retain, nonatomic, getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:) HKQuantity *deepBreathingDuration;
@property (retain, nonatomic, getter=_pushCount, setter=_setPushCount:) HKQuantity *pushCount;
@property (nonatomic, getter=_wheelchairUse, setter=_setWheelchairUse:) long long wheelchairUse;
@property (retain, nonatomic, getter=_flightsClimbed, setter=_setFlightsClimbed:) HKQuantity *flightsClimbed;
@property (retain, nonatomic, getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:) NSDate *energyBurnedGoalDate;
@property (retain, nonatomic, getter=_moveTimeGoalDate, setter=_setMoveTimeGoalDate:) NSDate *moveTimeGoalDate;
@property (retain, nonatomic, getter=_briskMinutesGoalDate, setter=_setBriskMinutesGoalDate:) NSDate *briskMinutesGoalDate;
@property (retain, nonatomic, getter=_activeHoursGoalDate, setter=_setActiveHoursGoalDate:) NSDate *activeHoursGoalDate;
@property (retain, nonatomic, getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property (retain, nonatomic, getter=_dailyMoveMinutesStatistics, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinuteStatistics;
@property (retain, nonatomic, getter=_dailyMoveTimeStatistics, setter=_setDailyMoveTimeStatistics:) NSArray *dailyMoveTimeStatistics;
@property (retain, nonatomic, getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property (retain, nonatomic) HKQuantity *distanceWalkingRunning;
@property (retain, nonatomic) HKQuantity *stepCount;
@property (retain, nonatomic) HKQuantity *appleMoveMinutes;
@property (retain, nonatomic) HKQuantity *appleMoveMinutesGoal;
@property (nonatomic, getter=_isDataLoading, setter=_setDataLoading:) BOOL dataLoading;
@property (readonly, nonatomic, getter=_hasMoveGoal) BOOL hasMoveGoal;
@property (readonly, nonatomic, getter=_hasEnergyBurnedGoal) BOOL hasEnergyBurnedGoal;
@property (readonly, nonatomic, getter=_hasAppleMoveMinutesGoal) BOOL hasAppleMoveMinutesGoal;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) HKQuantity *activeEnergyBurned;
@property (retain, nonatomic) HKQuantity *appleMoveTime;
@property (retain, nonatomic) HKQuantity *appleExerciseTime;
@property (retain, nonatomic) HKQuantity *appleStandHours;
@property (retain, nonatomic) HKQuantity *activeEnergyBurnedGoal;
@property (retain, nonatomic) HKQuantity *appleMoveTimeGoal;
@property (retain, nonatomic) HKQuantity *appleExerciseTimeGoal;
@property (retain, nonatomic) HKQuantity *appleStandHoursGoal;

+ (id)_mostSignificantCacheAmongCaches:(id)a0;
+ (BOOL)_validateActivitySummaryDateComponents:(id)a0 errorMessage:(id *)a1;
+ (id)_mostRecentlyCreatedCacheAmongCaches:(id)a0;
+ (BOOL)_validateActivitySummaryDateComponentsRange:(id)a0 endDateComponents:(id)a1 errorMessage:(id *)a2;

- (void)_validateQuantityAssignment:(id)a0 expectedUnit:(id)a1 propertyName:(id)a2;
- (long long)_activityMoveMode;
- (id)dateComponentsForCalendar:(id)a0;
- (void)_setActivityMoveMode:(long long)a0;
- (double)_percentageCompleteWithQuantity:(id)a0 goalQuantity:(id)a1 unit:(id)a2;
- (BOOL)_hasAppleMoveTimeGoal;
- (BOOL)_hasExerciseGoal;
- (BOOL)_useHourlyGoalComparison;
- (BOOL)_allFieldsAreEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_decodeQuantityFromCoder:(id)a0 forKey:(id)a1 unit:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithActivityCache:(id)a0 shouldIncludePrivateProperties:(BOOL)a1;
- (id)init;
- (BOOL)_hasStandHoursGoal;
- (void)_encodeQuantity:(id)a0 withCoder:(id)a1 key:(id)a2 unit:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
