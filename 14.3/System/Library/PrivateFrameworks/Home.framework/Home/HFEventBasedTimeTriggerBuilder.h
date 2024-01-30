@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder

@property (retain, nonatomic) NSSet *stagedEvents;

- (void).cxx_destruct;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)setRecurrences:(id)a0;
- (id)_updateEvents;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)_setupWithExistingTrigger:(id)a0;
- (id)_updateRecurrences;
- (id)_updateExecuteOnce;

@end
