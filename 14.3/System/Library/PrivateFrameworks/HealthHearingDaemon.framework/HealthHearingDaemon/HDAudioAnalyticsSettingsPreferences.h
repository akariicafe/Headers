@interface HDAudioAnalyticsSettingsPreferences : NSObject

- (BOOL)_hasPairedWatchWithNoiseApp;
- (id)headphonePreferencesForLocalDevice;
- (id)headphonePreferencesForActivePairedWatch;
- (id)noisePreferences;
- (id)headphonePreferences;

@end
