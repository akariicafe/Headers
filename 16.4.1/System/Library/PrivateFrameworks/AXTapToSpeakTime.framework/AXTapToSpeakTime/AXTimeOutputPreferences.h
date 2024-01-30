@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (void)setVoiceOverTapticTimeEncoding:(long long)a0;
- (void)setVoiceOverTapticTimeMode:(BOOL)a0;
- (id)tapticChimesFrequencyOptions;
- (id)tapticChimesLocalizedCurrentFrequency;
- (BOOL)_npsBoolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setTapToSpeakTimeEnabled:(BOOL)a0;
- (BOOL)voiceOverTapticChimesEnabled;
- (long long)voiceOverTapticTimeEncoding;
- (long long)voiceOverTapticChimesSoundType;
- (id)tapToSpeakTimeLocalizedTitle;
- (id)localizedStringForTapticChimesSoundType:(long long)a0;
- (BOOL)tapToSpeakTimeEnabled;
- (long long)_npsIntegerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (id)localizedStringForKey:(id)a0;
- (id)tapticTimeLocalizedDescription;
- (void)_setNPSValue:(id)a0 preferenceKey:(id)a1;
- (long long)tapToSpeakTimeAvailability;
- (BOOL)_voiceOverIsInTripleClick;
- (id)tapticTimeModeLocalizedDescription;
- (id)tapticTimeEncodingOptions;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)a0;
- (void)setVoiceOverTapticChimesSoundType:(long long)a0;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)a0;
- (id)tapToSpeakAvailabilityOptions;
- (BOOL)_voiceOverIsEnabled;
- (id)tapticChimesLocalizedTitle;
- (id)tapticChimesSoundsLocalizedTitle;
- (void)setTapToSpeakTimeAvailability:(long long)a0;
- (id)tapticTimeLocalizedTitle;
- (id)tapticChimesLocalizedDescription;
- (id)tapticChimesScheduleLocalizedTitle;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)a0;
- (id)accessibilityDomainAccessor;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticChimesSoundsOptions;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)a0;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (BOOL)voiceOverTapticTimeMode;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)_npsValueForPreferenceKey:(id)a0;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)_npsValueForPreferenceKey:(id)a0 expectedClass:(Class)a1;
- (id)localizedStringForTapticTimeEncoding:(long long)a0;

@end
