@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (long long)voiceOverTapticChimesFrequencyEncoding;
- (id)tapticChimesLocalizedTitle;
- (void)setVoiceOverTapticTimeEncoding:(long long)a0;
- (id)tapToSpeakAvailabilityOptions;
- (long long)tapToSpeakTimeAvailability;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)a0;
- (void)_setNPSValue:(id)a0 preferenceKey:(id)a1;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)a0;
- (id)tapticChimesLocalizedDescription;
- (BOOL)voiceOverTapticChimesEnabled;
- (BOOL)_voiceOverIsEnabled;
- (id)tapticChimesScheduleLocalizedTitle;
- (void)setVoiceOverTapticTimeMode:(BOOL)a0;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticChimesSoundsOptions;
- (id)tapticChimesSoundsLocalizedTitle;
- (BOOL)tapToSpeakTimeEnabled;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)a0;
- (BOOL)_voiceOverIsInTripleClick;
- (id)tapticChimesFrequencyOptions;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)tapticTimeModeLocalizedDescription;
- (id)localizedStringForKey:(id)a0;
- (id)tapticTimeLocalizedTitle;
- (id)accessibilityDomainAccessor;
- (id)localizedStringForTapticChimesSoundType:(long long)a0;
- (id)tapticChimesLocalizedCurrentFrequency;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)_npsValueForPreferenceKey:(id)a0;
- (id)tapticTimeLocalizedDescription;
- (long long)voiceOverTapticChimesSoundType;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)a0;
- (void)setVoiceOverTapticChimesSoundType:(long long)a0;
- (void)setTapToSpeakTimeAvailability:(long long)a0;
- (id)tapToSpeakTimeLocalizedTitle;
- (BOOL)voiceOverTapticTimeMode;
- (void)setTapToSpeakTimeEnabled:(BOOL)a0;
- (id)_npsValueForPreferenceKey:(id)a0 expectedClass:(Class)a1;
- (id)localizedStringForTapticTimeEncoding:(long long)a0;
- (long long)_npsIntegerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (long long)voiceOverTapticTimeEncoding;
- (BOOL)_npsBoolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (id)tapticTimeEncodingOptions;

@end
