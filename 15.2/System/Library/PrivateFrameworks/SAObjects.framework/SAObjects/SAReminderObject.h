@class SAReminderTrigger, NSString, NSArray, SAReminderListObject, NSDate, SAReminderRecurrence;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject

@property (copy, nonatomic) NSString *alternateSubject;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *dueDateTimeZoneId;
@property (nonatomic) BOOL important;
@property (copy, nonatomic) NSArray *lists;
@property (retain, nonatomic) id<SAReminderPayload> payload;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (copy, nonatomic) NSString *subject;
@property (retain, nonatomic) SAReminderListObject *toList;
@property (retain, nonatomic) SAReminderTrigger *trigger;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
