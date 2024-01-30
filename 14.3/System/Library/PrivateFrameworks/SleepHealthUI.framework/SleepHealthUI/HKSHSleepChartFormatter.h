@class HKHealthStore;

@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_firstCalendarForSummaries:(id)a0;
- (id)_firstDateForSummaries:(id)a0;
- (id)_rangeDataForInBedDuration:(id)a0 sleepDuration:(id)a1 summaryCount:(long long)a2 valueFont:(id)a3 unitFont:(id)a4;
- (id)_rangeDataForAverageBedtime:(id)a0 averageWakeTime:(id)a1 averageSleepStartTime:(id)a2 averageSleepEndTime:(id)a3 calendar:(id)a4 firstDayStart:(id)a5 timeFont:(id)a6 amPmFont:(id)a7;
- (id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)a0 timeFont:(id)a1 amPmFont:(id)a2;
- (id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)a0 valueFont:(id)a1 unitFont:(id)a2;
- (id)_lastSleepGoalForSummaries:(id)a0;
- (id)_attributedValueString:(id)a0 valueFont:(id)a1;
- (id)_localizedSchedulesFromSummaries:(id)a0 timeFont:(id)a1 amPmFont:(id)a2;

@end
