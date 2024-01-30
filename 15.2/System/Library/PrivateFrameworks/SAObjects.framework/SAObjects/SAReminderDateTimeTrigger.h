@class SAReminderDateTimeTriggerOffset, NSString, NSDate;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *relativeTimeOffset;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)dateTimeTrigger;
+ (id)dateTimeTriggerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
