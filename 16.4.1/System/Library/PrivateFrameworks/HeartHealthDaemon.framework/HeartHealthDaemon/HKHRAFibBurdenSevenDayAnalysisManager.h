@class HDProfile, HKHRAFibBurdenAnalyzer, HKHRAFibBurdenSevenDayAnalysisModeDeterminer, HKCalendarCache;

@interface HKHRAFibBurdenSevenDayAnalysisManager : NSObject {
    HDProfile *_profile;
    HKHRAFibBurdenSevenDayAnalysisModeDeterminer *_modeDeterminer;
    HKHRAFibBurdenAnalyzer *_analyzer;
    HKCalendarCache *_calendarCache;
    id /* block */ _dateGenerator;
}

- (id)analyzePreviousCalendarWeekWithFeatureStatus:(id)a0 shouldSaveSampleToDatabase:(BOOL)a1 error:(id *)a2;
- (struct { long long x0; long long x1; })_determineDayIndexRangeForPreviousCalendarWeekWithCurrentDate:(id)a0;
- (id)_createBurdenSampleWithPercentage:(double)a0 burdenPercentageWasClampedToLowerBound:(BOOL)a1 range:(struct { long long x0; long long x1; })a2 shouldSaveSampleToDatabase:(BOOL)a3 error:(id *)a4;
- (BOOL)_isDayOneDayAfterCalendarWeekWithCurrentDate:(id)a0;
- (id)initWithProfile:(id)a0 analyzer:(id)a1;
- (id)initWithProfile:(id)a0 modeDeterminer:(id)a1 analyzer:(id)a2 calendarCache:(id)a3 dateGenerator:(id /* block */)a4;
- (void).cxx_destruct;

@end
