@class HKSPSleepSchedule, HKSPSleepEventTimeline, HKSPMutableSleepSchedule;

@interface HKSPSleepEventTimelineResults : NSObject

@property (retain, nonatomic) HKSPSleepEventTimeline *timeline;
@property (retain, nonatomic) HKSPSleepEventTimeline *unadjustedTimeline;
@property (nonatomic) BOOL sleepScheduleInvalid;
@property (nonatomic) unsigned long long sleepScheduleInvalidReason;
@property (nonatomic) BOOL snoozeFireDateNeedsReset;
@property (retain, nonatomic) HKSPSleepSchedule *originalSleepSchedule;
@property (retain, nonatomic) HKSPMutableSleepSchedule *mutableValidSleepSchedule;
@property (readonly, nonatomic) HKSPSleepSchedule *validSleepSchedule;

- (void).cxx_destruct;

@end
