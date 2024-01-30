@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (retain, nonatomic) SAReminderLocationTrigger *locationTrigger;

+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
