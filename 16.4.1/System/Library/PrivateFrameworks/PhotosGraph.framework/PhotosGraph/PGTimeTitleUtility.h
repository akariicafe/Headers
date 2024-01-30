@interface PGTimeTitleUtility : NSObject

+ (BOOL)_yearIsNeededForDisplayingDate:(id)a0;
+ (BOOL)_canUseOverTheYearsForStartYear:(long long)a0 endYear:(long long)a1;
+ (id)_commonLocationLabelForLocationNodes:(id)a0;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)a0 allowedFormats:(unsigned long long)a1;
+ (id)_dateNodesFromMomentNodes:(id)a0 featuredYearNodes:(id)a1 momentsLocalStartDate:(id *)a2 momentsLocalEndDate:(id *)a3;
+ (void)_enumerateNeighborMomentNodesOfMomentNodes:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)_eventNodesCoverCompleteMonth:(id)a0;
+ (BOOL)_eventNodesCoverCompleteYear:(id)a0;
+ (id)_featuredDateNodesFromDateNodes:(id)a0 featuredYearNodes:(id)a1;
+ (BOOL)_hasReachedNumberVisitsPerMonth:(unsigned long long)a0 inEvents:(id)a1 withLocationNodes:(id)a2 startDateNode:(id)a3 endDateNode:(id)a4;
+ (BOOL)_hasReachedNumberVisitsPerYear:(unsigned long long)a0 inEvents:(id)a1 withLocationNodes:(id)a2 startDateNode:(id)a3 endDateNode:(id)a4;
+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)a0;
+ (BOOL)_momentNodes:(id)a0 coverCompleteMonth:(BOOL)a1 coverCompleteYear:(BOOL)a2;
+ (id)_numberOfYearsAgoWithEventNodes:(id)a0 relativeToDateComponents:(id)a1;
+ (id)_splitTimeTitleWithLocalStartDate:(id)a0 endDate:(id)a1 startDateNode:(id)a2 endDateNode:(id)a3 allowedFormats:(unsigned long long)a4 locale:(id)a5;
+ (id)babyGrowingUpTimeTitleWithEventNodes:(id)a0;
+ (id)numberOfYearsAgoWithMomentNodes:(id)a0 relativeToDateComponents:(id)a1 useOrdinal:(BOOL)a2;
+ (long long)numberOfYearsFromDate:(id)a0 toDate:(id)a1;
+ (id)peopleTimeTitleWithEventNodes:(id)a0;
+ (id)peopleTimeTitleWithEventNodes:(id)a0 requireMultipleYears:(BOOL)a1;
+ (id)significantDateNodesFromMomentNodes:(id)a0 dateFormatterType:(unsigned long long)a1;
+ (id)splitTimeTitleWithDateInterval:(id)a0 allowedFormats:(unsigned long long)a1;
+ (id)splitTimeTitleWithOptions:(id)a0;
+ (id)timeTitleWithDateInterval:(id)a0 allowedFormats:(unsigned long long)a1;
+ (id)timeTitleWithOptions:(id)a0;
+ (BOOL)yearIsNeededForDisplayingDate:(id)a0;

@end
