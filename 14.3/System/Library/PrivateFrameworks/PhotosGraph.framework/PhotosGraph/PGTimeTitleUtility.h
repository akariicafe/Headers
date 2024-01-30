@interface PGTimeTitleUtility : NSObject

+ (BOOL)_yearIsNeededForDisplayingDate:(id)a0;
+ (id)timeTitleWithOptions:(id)a0;
+ (id)timeTitleWithDateInterval:(id)a0 allowedFormats:(unsigned long long)a1;
+ (id)splitTimeTitleWithOptions:(id)a0;
+ (id)splitTimeTitleWithDateInterval:(id)a0 allowedFormats:(unsigned long long)a1;
+ (id)_splitTimeTitleWithLocalStartDate:(id)a0 endDate:(id)a1 startDateNode:(id)a2 endDateNode:(id)a3 allowedFormats:(unsigned long long)a4 locale:(id)a5;
+ (id)peopleTimeTitleWithEventNodes:(id)a0 requireMultipleYears:(BOOL)a1;
+ (id)peopleTimeTitleWithEventNodes:(id)a0;
+ (id)babyGrowingUpTimeTitleWithEventNodes:(id)a0;
+ (id)_numberOfYearsAgoWithEventNodes:(id)a0 relativeToDateComponents:(id)a1;
+ (id)numberOfYearsAgoWithMomentNodes:(id)a0 relativeToDateComponents:(id)a1 useOrdinal:(BOOL)a2;
+ (BOOL)_canUseOverTheYearsForStartYear:(long long)a0 endYear:(long long)a1;
+ (BOOL)yearIsNeededForDisplayingDate:(id)a0;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)a0 allowedFormats:(unsigned long long)a1;
+ (BOOL)_eventNodesCoverCompleteMonth:(id)a0;
+ (BOOL)_eventNodesCoverCompleteYear:(id)a0;
+ (BOOL)_momentNodes:(id)a0 coverCompleteTimeWithEdgeLabel:(id)a1;
+ (void)_enumerateNeighborMomentNodesOfMomentNodes:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)_hasReachedNumberVisitsPerMonth:(unsigned long long)a0 inEvents:(id)a1 withLocationNodes:(id)a2 startDateNode:(id)a3 endDateNode:(id)a4;
+ (BOOL)_hasReachedNumberVisitsPerYear:(unsigned long long)a0 inEvents:(id)a1 withLocationNodes:(id)a2 startDateNode:(id)a3 endDateNode:(id)a4;
+ (id)_commonLocationLabelForLocationNodes:(id)a0;
+ (id)_dateNodesFromMomentNodes:(id)a0 momentsLocalStartDate:(id *)a1 momentsLocalEndDate:(id *)a2;
+ (id)significantDateNodesFromMomentNodes:(id)a0 dateFormatterType:(unsigned long long)a1;
+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)a0;
+ (long long)numberOfYearsFromDate:(id)a0 toDate:(id)a1;

@end
