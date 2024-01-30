@interface HFTimerBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder

- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)_updateTimeZone;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)_setupWithExistingTrigger:(id)a0;
- (id)_updateRecurrences;

@end
