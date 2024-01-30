@interface CalTimeIntervalLocalization : NSObject

+ (id)_localizedTimeStringForTimedEventDuration:(double)a0 abbreviate:(BOOL)a1;
+ (id)_localizedStringWithTimeString:(id)a0 rawDuration:(double)a1 options:(unsigned long long)a2;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)a0 includeAlert:(BOOL)a1;
+ (id)_stringWithDurations:(id)a0 timeUnits:(id)a1;
+ (void)_calculateDurations:(id)a0 timeUnits:(id)a1 forDuration:(double)a2 allDay:(BOOL)a3 abbreviate:(BOOL)a4;
+ (void)_calculateDurations:(id)a0 timeUnits:(id)a1 forDuration:(double)a2 allDay:(BOOL)a3 dayDuration:(id *)a4 hourDuration:(id *)a5 minuteDuration:(id *)a6 secondDuration:(id *)a7 abbreviate:(BOOL)a8;
+ (id)localizedStringForInterval:(double)a0 withOptions:(unsigned long long)a1;

@end
