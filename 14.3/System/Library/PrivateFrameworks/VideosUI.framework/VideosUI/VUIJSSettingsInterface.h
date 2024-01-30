@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)consentedBrands;
- (id)userPreferences;
- (BOOL)privateModeEnabled;
- (BOOL)sportsScoreSpoilersAllowed;
- (id)deniedBrands;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (void)forceUpdateWithCallback:(id)a0;
- (id)appSettingsByChannelID;
- (id)wlkOverrides;
- (void)updateFeaturesConfiguration:(id)a0;

@end
