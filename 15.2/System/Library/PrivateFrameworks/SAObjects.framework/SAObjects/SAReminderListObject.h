@class SAReminderTrigger, NSString, NSArray, NSNumber, SAReminderRecurrence;

@interface SAReminderListObject : SADomainObject

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (retain, nonatomic) SAReminderTrigger *reminderTrigger;
@property (copy, nonatomic) NSArray *reminders;
@property (copy, nonatomic) NSArray *remindersToCreate;
@property (copy, nonatomic) NSNumber *totalNumOfReminders;

+ (id)listObject;
+ (id)listObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
