@interface REMRecurrenceRuleFormatter : NSObject

+ (id)_andDaysOfWeekString:(id)a0;
+ (id)_customDayCombinationDescription:(id)a0;
+ (id)_dayOfMonthAsString:(long long)a0;
+ (id)_daysOfWeek;
+ (id)_numberedWeekDayString:(id)a0;
+ (id)_orDaysOfWeekString:(id)a0;
+ (id)_weekDayPositionAsString:(long long)a0;
+ (long long)daysTypeForDayArray:(id)a0;
+ (id)naturalLanguageDescriptionForRecurrenceRule:(id)a0 withStartDate:(id)a1;
+ (id)localizedDescriptionForRepeatType:(long long)a0;
+ (id)naturalLanguageDescriptionForFrequency:(long long)a0 interval:(long long)a1 daysOfTheWeek:(id)a2 daysOfTheMonth:(id)a3 monthsOfTheYear:(id)a4 weeksOfTheYear:(id)a5 daysOfTheYear:(id)a6 setPositions:(id)a7 end:(id)a8 withStartDate:(id)a9;
+ (long long)repeatTypeForFrequency:(long long)a0 interval:(long long)a1 daysOfTheWeek:(id)a2 daysOfTheMonth:(id)a3 monthsOfTheYear:(id)a4 weeksOfTheYear:(id)a5 daysOfTheYear:(id)a6 setPositions:(id)a7 end:(id)a8 recurrenceDate:(id)a9 recurrenceTimeZone:(id)a10 getRepeatEnd:(out id *)a11;
+ (long long)repeatTypeForRecurrenceRules:(id)a0 recurrenceDate:(id)a1 recurrenceTimeZone:(id)a2 getRepeatEnd:(out id *)a3;
+ (id)shortNaturalLanguageDescriptionForFrequency:(long long)a0 interval:(long long)a1 daysOfTheWeek:(id)a2 daysOfTheMonth:(id)a3 monthsOfTheYear:(id)a4 setPositions:(id)a5 date:(id)a6 timeZone:(id)a7 lowercase:(BOOL)a8;
+ (id)shortNaturalLanguageDescriptionForRecurrenceRule:(id)a0 date:(id)a1 timeZone:(id)a2 lowercase:(BOOL)a3;
+ (id)_readableMonths;
+ (id)_byDayOfWeekOrdinalStrings;
+ (id)_customByDayItemFormatLocalizedString;
+ (id)_localizedOfMonthStringForMonth:(id)a0;
+ (id)_readableWeekDays;
+ (id)_stringForByDayOfWeek:(id)a0 setPositions:(id)a1;
+ (id)_stringForDayOfWeek:(long long)a0;
+ (id)_stringForMonthNumber:(long long)a0;

@end
