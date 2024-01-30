@class HKHealthStore;

@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) HKHealthStore *healthStore;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)_attributedValueString:(id)a0 valueFont:(id)a1;
- (id)_firstDateForSummaries:(id)a0;
- (id)_prefixColorForSleepValue:(long long)a0 isPrefixColorActive:(id)a1;
- (id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
- (id)_rangeDataForInBedDuration:(id)a0 sleepDuration:(id)a1 awakeDuration:(id)a2 asleepCoreDuration:(id)a3 asleepDeepDuration:(id)a4 asleepREMDuration:(id)a5 overrideDuration:(id)a6 arePrefixColorsActive:(id)a7 statisticsType:(long long)a8 valueFont:(id)a9 unitFont:(id)a10 formatterOptions:(unsigned long long)a11;
- (id)_firstCalendarForSummaries:(id)a0;
- (id)_lastSleepGoalForSummaries:(id)a0;
- (id)_localizedSchedulesFromSummaries:(id)a0 timeFont:(id)a1 amPmFont:(id)a2;
- (id)_longTitleForSelectedRangeDataType:(long long)a0 statisticsType:(long long)a1;
- (id)_rangeDataForAverageInBedStartTime:(id)a0 averageInBedEndTime:(id)a1 averageSleepStartTime:(id)a2 averageSleepEndTime:(id)a3 inBedDuration:(id)a4 sleepDuration:(id)a5 calendar:(id)a6 firstDayStart:(id)a7 timeFont:(id)a8 amPmFont:(id)a9 formatterOptions:(unsigned long long)a10;
- (id)_rangeDataForDurationValue:(id)a0 dataType:(long long)a1 sleepValue:(long long)a2 isPrefixColorActive:(id)a3 valueFont:(id)a4 unitFont:(id)a5 statisticsType:(long long)a6 formatterOptions:(unsigned long long)a7;
- (id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)a0 timeFont:(id)a1 amPmFont:(id)a2;
- (long long)_statisticsTypeForSummaries:(id)a0 calendar:(id)a1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;

@end
