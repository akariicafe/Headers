@class NSTimeZone, NSString, NSArray, HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerBasedTimeTriggerBuilder : HFTriggerBuilder <HFConcreteTimeTriggerBuilderLikeObject>

@property (readonly, weak, nonatomic) NSString *name;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (id)_updateRecurrences;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)triggerEnabledStateDidChange:(BOOL)a0;
- (void)copyCurrentStateFromTriggerBuilder:(id)a0;
- (void)_setupWithExistingTrigger:(id)a0;
- (id)_updateTimeZone;

@end
