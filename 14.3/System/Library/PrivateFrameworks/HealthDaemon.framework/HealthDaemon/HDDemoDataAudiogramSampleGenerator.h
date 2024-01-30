@interface HDDemoDataAudiogramSampleGenerator : HDDemoDataBaseSampleGenerator

- (id)_dateFromBaseDate:(id)a0 monthsInPast:(long long)a1 forCalendar:(id)a2;
- (id)_generateAudiogramForDate:(id)a0;
- (id)_randomSensitivityValueForSlot:(long long)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;

@end
