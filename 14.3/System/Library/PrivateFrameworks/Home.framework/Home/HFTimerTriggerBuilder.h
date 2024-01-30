@class NSTimeZone, NSArray, HFEventBuilder, HFConcreteTimeTriggerBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) HFConcreteTimeTriggerBuilder *concreteTriggerBuilder;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;

- (id)_performValidation;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (void)setEnabled:(BOOL)a0;
- (void)_createConcreteTriggerBuilder;
- (BOOL)_supportsEventBasedTimeTriggers;
- (BOOL)_currentStateRequiresEventBasedTimeTriggers;

@end
