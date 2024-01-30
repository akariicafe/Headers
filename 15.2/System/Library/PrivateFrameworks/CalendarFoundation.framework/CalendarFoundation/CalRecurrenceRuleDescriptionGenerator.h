@interface CalRecurrenceRuleDescriptionGenerator : NSObject

+ (long long)daysTypeForDayArray:(id)a0;
+ (id)humanReadableDescriptionWithStartDate:(id)a0 ofRecurrenceRuleICSString:(id)a1 isConcise:(BOOL)a2;
+ (id)_daysOfWeek;
+ (id)_andDaysOfWeekString:(id)a0;
+ (id)_weekDayPositionAsString:(long long)a0;
+ (id)_orDaysOfWeekString:(id)a0;
+ (id)_dayOfMonthAsString:(long long)a0;
+ (id)localizedOfMonthStringForMonth:(id)a0;
+ (id)_numberedWeekDayString:(id)a0;
+ (id)_customDayCombinationDescription:(id)a0;

@end
