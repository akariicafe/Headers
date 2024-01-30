@class NSTimeZone, NSString, NSArray, HFEventBuilder, HMTrigger;
@protocol HFTimeEventBuilder;

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder

@property (retain, nonatomic) HMTrigger *trigger;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;

+ (id)builderForExistingTrigger:(id)a0 inHome:(id)a1;

- (void).cxx_destruct;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)copyCurrentStateFromTriggerBuilder:(id)a0;
- (void)triggerEnabledStateDidChange:(BOOL)a0;

@end
