@class NSDateComponents;

@interface HKSPSleepScheduleRange : NSObject

@property (readonly, copy, nonatomic) NSDateComponents *latestWakeUpComponents;
@property (readonly, copy, nonatomic) NSDateComponents *earliestWakeUpComponents;
@property (readonly, copy, nonatomic) NSDateComponents *latestBedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *earliestBedtimeComponents;
@property (readonly, nonatomic) BOOL earliestBedtimeIsOnPreviousDay;

- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithLatestWakeUpComponents:(id)a0 latestBedtimeComponents:(id)a1 earliestWakeUpComponents:(id)a2 earliestBedtimeComponents:(id)a3 earliestBedtimeIsOnPreviousDay:(BOOL)a4;

@end
