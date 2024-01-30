@class NSTimeZone, NSArray, HFEventBuilder, HFTriggerBuilder;
@protocol HFConcreteTimeTriggerBuilderLikeObject, HFTimeEventBuilder;

@interface HFTimerTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) HFTriggerBuilder *concreteTriggerBuilder;
@property (retain, nonatomic) id<HFConcreteTimeTriggerBuilderLikeObject> timeInterface;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;

- (id)_performValidation;
- (void)setEnabled:(BOOL)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)naturalLanguageDetailsWithOptions:(id)a0;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)_createConcreteTriggerBuilder;
- (BOOL)_supportsEventBasedTimeTriggers;
- (BOOL)_currentStateRequiresEventBasedTimeTriggers;

@end
