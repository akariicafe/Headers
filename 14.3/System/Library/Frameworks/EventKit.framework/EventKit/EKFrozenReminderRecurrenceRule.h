@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject

+ (long long)convertToReminderKitFrequency:(int)a0;
+ (long long)convertToReminderKitWeekday:(int)a0;
+ (int)convertFromReminderKitFrequency:(long long)a0;
+ (int)convertFromReminderKitWeekday:(long long)a0;
+ (Class)meltedClass;

- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)_recurrenceRule;
- (id)specifier;
- (long long)interval;
- (int)frequency;
- (id)remObjectID;
- (id)uniqueIdentifier;
- (id)uuid;
- (void)loadSpecifierDaysOfTheWeek:(id *)a0 daysOfTheMonth:(id *)a1 monthsOfTheYear:(id *)a2 weeksOfTheYear:(id *)a3 daysOfTheYear:(id *)a4 setPositions:(id *)a5;
- (long long)remWeekdayToEKWeekday:(long long)a0;
- (long long)ekWeekdayToREMWeekday:(long long)a0;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)a0;
- (int)firstDayOfTheWeekRaw;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)addUpdatedRecurrenceRule:(id)a0;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (unsigned long long)count;
- (id)endDate;

@end
