@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticChimesLocalizedTitle;
- (id)accessibilityDomainAccessor;
- (id)tapticChimesSoundsOptions;
- (id)tapticTimeLocalizedTitle;
- (id)tapToSpeakTimeLocalizedTitle;
- (id)_npsValueForPreferenceKey:(id)a0;
- (void)setVoiceOverTapticChimesSoundType:(long long)a0;
- (id)tapToSpeakTimeLocalizedDescription;
- (BOOL)tapToSpeakTimeEnabled;
- (BOOL)voiceOverTapticTimeMode;
- (BOOL)_voiceOverIsEnabled;
- (id)tapticChimesLocalizedDescription;
- (void)setVoiceOverTapticTimeMode:(BOOL)a0;
- (BOOL)voiceOverTapticChimesEnabled;
- (id)tapticTimeLocalizedDescription;
- (id)tapticChimesSoundsLocalizedTitle;
- (id)tapticChimesScheduleLocalizedTitle;
- (id)tapticChimesFrequencyOptions;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)a0;
- (void)setTapToSpeakTimeEnabled:(BOOL)a0;
- (id)tapticChimesLocalizedCurrentFrequency;
- (long long)tapToSpeakTimeAvailability;
- (void)setTapToSpeakTimeAvailability:(long long)a0;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)a0;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)_npsValueForPreferenceKey:(id)a0 expectedClass:(Class)a1;
- (long long)voiceOverTapticTimeEncoding;
- (long long)voiceOverTapticChimesSoundType;
- (id)localizedStringForTapticChimesSoundType:(long long)a0;
- (id)tapticTimeModeLocalizedDescription;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)a0;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)a0;
- (long long)_npsIntegerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (id)tapToSpeakAvailabilityOptions;
- (id)localizedStringForTapticTimeEncoding:(long long)a0;
- (BOOL)_voiceOverIsInTripleClick;
- (void)_setNPSValue:(id)a0 preferenceKey:(id)a1;
- (BOOL)_npsBoolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setVoiceOverTapticTimeEncoding:(long long)a0;
- (id)tapticTimeEncodingOptions;

@end
