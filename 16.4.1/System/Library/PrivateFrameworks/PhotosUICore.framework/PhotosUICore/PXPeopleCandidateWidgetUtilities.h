@interface PXPeopleCandidateWidgetUtilities : NSObject

+ (id)_tomorrow;
+ (id)insertPerson:(id)a0 forDaysDictionary:(id)a1;
+ (id)_dateKeyForDay:(id)a0;
+ (id)_dateKeyForToday;
+ (id)_dateKeyForTomorrow;
+ (id)_localTimeZoneFormatStringForDate:(id)a0;
+ (BOOL)_pastMidnightBufferThreshold;
+ (id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)a0;
+ (BOOL)shouldFetchCandidatesForPerson:(id)a0 forDaysDictionary:(id)a1;

@end
