@class NSString, EKRecurrenceEnd, NSArray, NSDateComponents, NSDate, EKRecurrenceHelper;

@interface EKRecurrenceRule : EKObject <NSCopying> {
    EKRecurrenceHelper *_recurrenceHelper;
}

@property (readonly, nonatomic) BOOL shouldPinMonthDays;
@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly) BOOL usesEndDate;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSDate *cachedEndDate;
@property (readonly, nonatomic) BOOL dirtyStateMayAffectExceptionDates;
@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property (readonly, nonatomic) long long frequency;
@property (readonly, nonatomic) long long interval;
@property (readonly, nonatomic) long long firstDayOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheMonth;
@property (readonly, nonatomic) NSArray *daysOfTheYear;
@property (readonly, nonatomic) NSArray *weeksOfTheYear;
@property (readonly, nonatomic) NSArray *monthsOfTheYear;
@property (readonly, nonatomic) NSArray *setPositions;

+ (long long)_ekWeekdayFromCalDayOfWeek:(int)a0;
+ (id)iCalendarValueFromRecurrenceType:(long long)a0;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)a0;
+ (long long)daysTypeForDayArray:(id)a0;
+ (id)recurrenceRuleWithType:(long long)a0 interval:(unsigned long long)a1 end:(id)a2;
+ (id)knownSingleValueKeysForComparison;
+ (id)iCalendarValueFromDate:(id)a0 isDateOnly:(BOOL)a1 isFloating:(BOOL)a2;
+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;
+ (int)_calDayOfWeekFromEKWeekday:(long long)a0;

- (void)setSpecifier:(id)a0;
- (void)setUUID:(id)a0;
- (void)setDaysOfTheYear:(id)a0;
- (id)initRecurrenceWithFrequency:(long long)a0 interval:(long long)a1 end:(id)a2;
- (void)setSetPositions:(id)a0;
- (BOOL)isWeekdayRule;
- (void)setDaysOfTheMonth:(id)a0;
- (void)rollback;
- (void)setWeeksOfTheYear:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(int)a0;
- (id)init;
- (void)setCount:(unsigned long long)a0;
- (id)specifier;
- (void).cxx_destruct;
- (void)_updateSpecifierIfNeeded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_recurrenceHelper;
- (void)setInterval:(unsigned long long)a0;
- (void)reset;
- (id)humanReadableDescriptionWithStartDate:(id)a0;
- (void)setMonthsOfTheYear:(id)a0;
- (void)setFrequency:(long long)a0;
- (void)setFirstDayOfTheWeek:(unsigned long long)a0;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)a0;
- (id)description;
- (void)setEndDate:(id)a0;
- (int)firstDayOfTheWeekRaw;
- (BOOL)isSimpleRule;
- (BOOL)mayOccurAfterDate:(id)a0;
- (id)initRecurrenceWithFrequency:(long long)a0 interval:(long long)a1 daysOfTheWeek:(id)a2 daysOfTheMonth:(id)a3 monthsOfTheYear:(id)a4 weeksOfTheYear:(id)a5 daysOfTheYear:(id)a6 setPositions:(id)a7 end:(id)a8;
- (BOOL)isEqualToRecurrenceRule:(id)a0;
- (id)stringValueAsDateOnly:(BOOL)a0 isFloating:(BOOL)a1;
- (BOOL)isWeekendRule;
- (unsigned long long)count;
- (void)setDaysOfTheWeek:(id)a0;
- (id)endDate;
- (BOOL)isAnyDayRule;
- (id)humanReadableDescriptionWithStartDate:(id)a0 isConcise:(BOOL)a1;

@end
