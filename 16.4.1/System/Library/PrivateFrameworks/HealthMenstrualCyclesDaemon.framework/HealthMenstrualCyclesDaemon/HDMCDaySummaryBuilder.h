@class NSMutableDictionary, HDProfile, NSMutableArray, HKCalendarCache;

@interface HDMCDaySummaryBuilder : NSObject {
    HDProfile *_profile;
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
    NSMutableArray *_wristTemperatureSamples;
    NSMutableArray *_startedCycleFactors;
    NSMutableArray *_endedCycleFactors;
    NSMutableDictionary *_sampleCountByType;
}

@property (readonly, nonatomic) long long dayIndex;

- (void).cxx_destruct;
- (unsigned long long)_symptoms;
- (long long)_ovulationTestResult;
- (id)_wristTemperature;
- (long long)_sexualActivity;
- (id)_basalBodyTemperature;
- (long long)_cervicalMucusQuality;
- (id)_endedCycleFactors;
- (BOOL)_intermenstrualBleeding;
- (long long)_pregnancyTestResult;
- (long long)_progesteroneTestResult;
- (id)_startedCycleFactors;
- (long long)_menstrualFlowWithModificationDay:(long long *)a0 startOfCycleFromCycleTracking:(id *)a1;
- (void)addCycleTrackingSample:(id)a0;
- (id)createDaySummaryWithDevice:(id)a0;
- (id)initWithProfile:(id)a0 dayIndex:(long long)a1 calendarCache:(id)a2;

@end
