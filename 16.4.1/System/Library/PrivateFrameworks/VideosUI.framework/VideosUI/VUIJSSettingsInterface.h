@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (id)userPreferences;
- (id)consentedBrands;
- (BOOL)sportsScoreSpoilersAllowed;
- (BOOL)privateModeEnabled;
- (void)dealloc;
- (id)deniedBrands;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (id)appSettingsByChannelID;
- (void)forceUpdateWithCallback:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (void)updateFeaturesConfiguration:(id)a0;
- (id)wlkOverrides;

@end
