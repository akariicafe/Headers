@class NSMutableDictionary, HKCalendarCache, NSMutableArray;

@interface HDMCDaySummaryBuilder : NSObject {
    HKCalendarCache *_calendarCache;
    NSMutableArray *_menstrualFlowSamples;
    NSMutableArray *_intermenstrualBleedingSamples;
    NSMutableArray *_symptomsSamples;
    NSMutableArray *_sexualActivitySamples;
    NSMutableArray *_ovulationTestResultSamples;
    NSMutableArray *_pregnancyTestResultSamples;
    NSMutableArray *_progesteroneTestResultSamples;
    NSMutableArray *_cervicalMucusQualitySamples;
    NSMutableArray *_basalBodyTemperatureSamples;
    NSMutableArray *_startedCycleFactors;
    NSMutableArray *_endedCycleFactors;
    NSMutableDictionary *_sampleCountByType;
}

@property (readonly, nonatomic) long long dayIndex;

- (void).cxx_destruct;
- (unsigned long long)_symptoms;
- (long long)_ovulationTestResult;
- (long long)_cervicalMucusQuality;
- (BOOL)_intermenstrualBleeding;
- (long long)_sexualActivity;
- (long long)_pregnancyTestResult;
- (long long)_progesteroneTestResult;
- (id)_basalBodyTemperature;
- (id)_startedCycleFactors;
- (id)_endedCycleFactors;
- (id)createDaySummaryWithDevice:(id)a0;
- (id)initWithDayIndex:(long long)a0 calendarCache:(id)a1;
- (void)addCycleTrackingSample:(id)a0;
- (long long)_menstrualFlowWithModificationDay:(long long *)a0 startOfCycleFromCycleTracking:(id *)a1;

@end
