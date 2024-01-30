@class SAReminderDateTimeTriggerOffset, NSArray;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (copy, nonatomic) NSArray *reminderIdentifierList;

+ (id)snooze;
+ (id)snoozeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
