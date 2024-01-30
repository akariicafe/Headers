@class CLKComplicationTemplate;

@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate *_complicationTemplate;
}

+ (BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(long long)a0;
+ (BOOL)acceptsClassicComplicationType:(unsigned long long)a0 withFamily:(long long)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (id)_city;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_dateTemplate;
- (void)_localeDidChange:(id)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)_alarmTemplate;
- (id)_timerTemplate;
- (id)_stopwatchTemplate;
- (id)_worldClockTemplate;
- (id)_batteryTemplate;
- (id)_heartrateTemplate;
- (id)_wellnessTemplate;
- (id)_nextEventTemplate;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_radioTemplate;
- (id)_podcastTemplate;
- (id)_nowPlayingTemplate;
- (id)_workoutTemplate;
- (id)_breathingTemplate;
- (id)_reminderTemplate;
- (id)_newsTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)a0;
- (id)_wellnessStatisticsForData:(id)a0 unit:(id)a1;
- (id)_wellnessStatisticsForStandHours:(id)a0;
- (id)currentSwitcherTemplate;
- (id)_currentEntryModel;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)sampleTemplate;

@end
