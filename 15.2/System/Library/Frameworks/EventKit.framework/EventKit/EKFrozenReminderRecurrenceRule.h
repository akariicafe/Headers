@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject

+ (Class)meltedClass;
+ (long long)convertToReminderKitFrequency:(int)a0;
+ (long long)convertToReminderKitWeekday:(int)a0;
+ (int)convertFromReminderKitFrequency:(long long)a0;
+ (int)convertFromReminderKitWeekday:(long long)a0;

- (id)remObjectID;
- (int)firstDayOfTheWeekRaw;
- (id)endDate;
- (id)specifier;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)addUpdatedRecurrenceRule:(id)a0;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)uniqueIdentifier;
- (void)loadSpecifierDaysOfTheWeek:(id *)a0 daysOfTheMonth:(id *)a1 monthsOfTheYear:(id *)a2 weeksOfTheYear:(id *)a3 daysOfTheYear:(id *)a4 setPositions:(id *)a5;
- (long long)remWeekdayToEKWeekday:(long long)a0;
- (long long)ekWeekdayToREMWeekday:(long long)a0;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)a0;
- (id)_recurrenceRule;
- (long long)interval;
- (id)uuid;
- (unsigned long long)count;
- (int)frequency;

@end
