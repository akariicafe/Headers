@class NSString, NSDateInterval, HKSPSleepScheduleOccurrence, HKSPSleepEvent;

@interface HKSPResolvedSleepScheduleOccurrence : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *scheduledInterval;
@property (readonly, nonatomic) NSDateInterval *bedtimeInterval;
@property (readonly, nonatomic) NSDateInterval *windDownInterval;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *occurrence;
@property (readonly, nonatomic) HKSPSleepEvent *wakeUpEvent;
@property (readonly, nonatomic) HKSPSleepEvent *bedtimeEvent;
@property (readonly, nonatomic) HKSPSleepEvent *windDownEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (long long)compare:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)generateOverrideOccurrenceForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithOccurrence:(id)a0 wakeUpEvent:(id)a1 bedtimeEvent:(id)a2 windDownEvent:(id)a3;
- (id)occurrenceByAdjustingEvent:(id)a0;
- (id)occurrenceByRemovingEventWithIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
