@class CLKComplicationTemplate;

@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate *_complicationTemplate;
}

+ (BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(long long)a0;
+ (BOOL)acceptsClassicComplicationType:(unsigned long long)a0 withFamily:(long long)a1;
+ (BOOL)_shouldUseFallbackImagesForDevice:(id)a0;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (id)_city;
- (id)_dateTemplate;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)dealloc;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)_alarmTemplate;
- (id)_stopwatchTemplate;
- (id)_worldClockTemplate;
- (id)_batteryTemplate;
- (id)_heartrateTemplate;
- (id)_nextEventTemplate;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_radioTemplate;
- (id)_podcastsTemplate;
- (id)_nowPlayingTemplate;
- (id)_breathingTemplate;
- (id)_reminderTemplate;
- (id)_newsTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)a0;
- (id)currentSwitcherTemplate;
- (id)_currentEntryModel;
- (id)_fullColorImageProviderWithSystemImageName:(id)a0 tintColor:(id)a1 fallbackImageName:(id)a2;
- (id)_imageProviderWithSystemImageName:(id)a0 overridePointSize:(id)a1 tintColor:(id)a2 fallbackImageName:(id)a3;
- (BOOL)supportsFlowerImages;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)sampleTemplate;

@end
