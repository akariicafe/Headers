@interface HFTimerTriggerCalendarEventAdapter : HFTimerTriggerTimeEventAdapter

+ (BOOL)hasWeekdayRecurrenceInRecurrences:(id)a0;

- (id)createTriggerWithName:(id)a0 timeZone:(id)a1 recurrences:(id)a2;
- (id)updateTrigger:(id)a0;

@end
