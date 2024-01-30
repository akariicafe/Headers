@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (copy, nonatomic) NSString *frequencyTimeUnit;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *weeksOfTheYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
